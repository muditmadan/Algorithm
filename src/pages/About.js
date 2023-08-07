import React from 'react'
import MultiplePizzas from '../assets/multiplePizzas.jpeg'
import '../styles/About.css'

function About() {
  return (
    <div className='about'>
        <div className='aboutTop' style={{ backgroundImage: `url(${MultiplePizzas})`}}>

        </div>
        <div className='aboutBottom'>
            <h1>ABOUT US</h1>
            <p>
                Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.<p>Lorem ipsum dolor sit amet. Qui totam consectetur qui iste nesciunt et harum consequatur! Et commodi magni est sunt laborum quo recusandae numquam. </p><p>In ipsum quia nam dolore quam a commodi laboriosam est similique sint cum reprehenderit vitae. Ut facere nemo est soluta commodi aut provident nisi. Et quia porro ut internos rerum id voluptatem laboriosam. </p><p>Est ipsum soluta 33 iure placeat sed optio dolorum sed omnis soluta in veniam deserunt ut vero neque. A rerum dolore sed maxime doloribus et voluptatum exercitationem ea placeat architecto. Quo impedit quibusdam rem natus odio et deserunt tempora quo ipsam magnam. </p>
            </p>
        </div>
    </div>
  )
}

export default About