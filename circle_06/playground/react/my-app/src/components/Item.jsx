import './item.css'
import Calendar from './Calendar';
function Item(props){
    return (
    <div className='expense-item'>
        <Calendar date={props.date} />
        <div className='expense-item__description'>
            <h2>{props.title}</h2>
            <div className='expense-item__price'>${props.amount}</div>
        </div>
    </div>
    )
}

export default Item;