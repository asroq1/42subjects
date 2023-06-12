import { useEffect, useState } from 'react'
import './App.css'
import AppRouter from './Router'
import { getAuth, onAuthStateChanged } from 'firebase/auth'

function App() {
  const [init, setInit] = useState(false)
  const [isLoggedIn, setIsLoggedIn] = useState(false)

  useEffect(() => {
    const auth = getAuth()
    onAuthStateChanged(auth, user => {
      if (user) {
        setIsLoggedIn(true)
        const uid = user.uid
      } else {
        setIsLoggedIn(false)
      }
      setInit(true)
    })
  })
  return <>{init ? <AppRouter isLoggedIn={isLoggedIn} /> : 'initializing...'}</>
}

export default App
