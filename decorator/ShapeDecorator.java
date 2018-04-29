
import java.util.*;

/**
 * 
 */
public abstract class ShapeDecorator implements Shape {
protected Shape decoratedShape;
    /**
     * Default constructor
     */
    public ShapeDecorator(Shape decoratedShape) {
 this.decoratedShape = decoratedShape;
    }

    
    public Shape shape;


   
    public void ShapeDecorator() {
      
    }

    
    public void draw() {
decoratedShape.draw();
        
    
    }

}
