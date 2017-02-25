---
title: "Avviso del compilatore (livello 4) C4437 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
dev_langs: 
  - "C++"
ms.assetid: dc07e350-20eb-474c-a7ad-f841ae7ec339
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# Avviso del compilatore (livello 4) C4437
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

dynamic\_cast da base virtuale 'classe1' a 'classe2' potrebbe non riuscire in alcuni contesti        Compilare con \/vd2 oppure definire 'classe2' con il \#pragma vtordisp\(2\) in effetti  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 Il compilatore ha rilevato un'operazione `dynamic_cast` con le seguenti caratteristiche.  
  
-   Il cast ha origine da un puntatore della classe base a un puntatore della classe derivata.  
  
-   La classe derivata eredita virtualmente la classe base.  
  
-   La classe derivata non ha un campo `vtordisp` per la base virtuale.  
  
-   Il cast non viene trovato in un costruttore o un distruttore della classe derivata, o in una classe che ulteriormente eredita dalla classe derivata \(altrimenti, l'avviso del compilatore C4436 sarà generato\).  
  
 L'avviso indica che `dynamic_cast` potrebbe non essere eseguito correttamente, se si utilizza un oggetto parzialmente costruito.  Questa situazione si verifica quando la funzione contenitore viene chiamata da un costruttore o un distruttore di una classe che eredita la classe derivata denominata nell'avviso.  Se la classe derivata denominata nell'avviso non è mai più derivata, o la funzione contenitore non viene chiamata durante la costruzione o la distruzione di un oggetto, l'avviso può essere ignorato.  
  
## Esempio  
 Nell'esempio seguente viene generato C4437 e viene illustrato il problema di generazione del codice che risulta dal campo mancante `vtordisp`.  
  
```cpp  
// C4437.cpp  
// To see the warning and runtime assert, compile with: /W4  
// To eliminate the warning and assert, compile with: /W4 /vd2  
//       or compile with: /W4 /DFIX  
#pragma warning(default : 4437)  
#include <cassert>  
  
struct A  
{  
public:  
    virtual ~A() {}  
};  
  
#if defined(FIX)  
#pragma vtordisp(push, 2)  
#endif  
struct B : virtual A  
{  
    B()  
    {  
        func();  
    }  
  
    void func()  
    {  
        A* a = static_cast<A*>(this);  
        B* b = dynamic_cast<B*>(a);     // C4437  
        assert(this == b);              // assert unless compiled with /vd2  
    }  
};  
#if defined(FIX)  
#pragma vtordisp(pop)  
#endif  
  
struct C : B  
{  
    int i;  
};  
  
int main()  
{  
    C c;  
}  
```  
  
## Vedere anche  
 [Operatore dynamic\_cast](../../cpp/dynamic-cast-operator.md)   
 [vtordisp](../../preprocessor/vtordisp.md)   
 [Avviso del compilatore \(livello 1\) C4436](../../error-messages/compiler-warnings/compiler-warning-level-1-c4436.md)