---
---
# <a name="compiler-warning-level-1-c4055"></a>Avviso del compilatore (livello 1) C4055  
  
'conversion': da puntatore a dati 'type1' a puntatore a funzione 'type2'  
  
**Obsoleto:** questo avviso non viene generato da Visual Studio 2017 e versioni successive.

 Viene eseguito il cast (probabilmente in modo errato) di un puntatore a dati a un puntatore a funzione. Si tratta di un avviso di livello 1 in /Za e di un avviso di livello 4 in /Ze.  
  
 L'esempio seguente genera l'errore C4055:  
  
```C  
// C4055.c  
// compile with: /Za /W1 /c  
typedef int (*PFUNC)();  
int *pi;  
PFUNC f() {  
   return (PFUNC)pi;   // C4055  
}  
```  
  
 In /Ze questo è un avviso di livello 4.  
  
```C  
// C4055b.c  
// compile with: /W4 /c  
typedef int (*PFUNC)();  
int *pi;  
PFUNC f() {  
return (PFUNC)pi;   // C4055  
}  
```