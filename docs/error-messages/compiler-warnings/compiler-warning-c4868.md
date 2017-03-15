---
title: C4868 di avviso del compilatore | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4868
ms.assetid: fc6aa7e5-34dd-4ec2-88bd-16e430361dc7
caps.latest.revision: 4
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 26031e1ac6f39d745a772e1becf3f817213a59d8
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-c4868"></a>C4868 di avviso del compilatore
compilatore 'file(line_number)' non può essere applicata ordine di valutazione da sinistra a destra nell'elenco di inizializzatori tra parentesi graffe  
  
 Gli elementi di un elenco di inizializzatori tra parentesi graffe devono essere valutate in ordine da sinistra a destra. Esistono due casi in cui il compilatore è in grado di garantire questo ordine: il primo è quando alcuni elementi sono gli oggetti passati per valore. il secondo è durante la compilazione con `/clr` e alcuni elementi di campi di oggetti o gli elementi della matrice. Quando il compilatore non garanzia la valutazione da sinistra a destra Genera avviso C4868.  
  
 Questo avviso può essere generato in seguito a operazioni di conformità del compilatore di Visual C++ 2015 Update 2 è stata eseguita. Il codice compilato con versioni precedenti di Visual C++ 2015 Update 2 genererà C4868.  
  
 Per impostazione predefinita, questo avviso non è attivo. Utilizzare `/Wall` per attivare l'avviso.  
  
 Per risolvere il problema, considerare innanzitutto se è necessaria, ad esempio quando la valutazione degli elementi potrebbe produrre effetti collaterali dipendente dall'ordine di valutazione da sinistra a destra degli elementi dell'elenco dell'inizializzatore. In molti casi, l'ordine in cui vengono valutati gli elementi non ha un effetto osservabile.  
  
 Se l'ordine di valutazione deve essere da sinistra a destra, considerare se è possibile invece passare gli elementi per riferimento (const). Una modifica, ad esempio si elimina l'avviso nell'esempio di codice seguente.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C4868.  
  
```  
// C4868.cpp  
// compile with: /c /Wall  
#include <cstdio>  
  
class HasCopyConstructor  
{  
public:  
    int x;  
  
    HasCopyConstructor(int x): x(x) {}  
  
    HasCopyConstructor(const HasCopyConstructor& h): x(h.x)  
    {  
        printf("Constructing %d\n", h.x);  
    }  
};  
  
class TripWarning4868  
{  
public:  
    // note that taking "HasCopyConstructor" parameters by-value will trigger copy-construction.  
    TripWarning4868(HasCopyConstructor a, HasCopyConstructor b) {}  
  
    // This variation will not trigger the warning:  
    // TripWarning4868(const HasCopyConstructor& a, const HasCopyConstructor& b) {}  
};  
  
int main()  
{  
    HasCopyConstructor a{1};  
    HasCopyConstructor b{2};  
  
    // the warning will indicate the below line, the usage of the braced initializer list.  
    TripWarning4868 warningOnThisLine{a, b};  
};  
```
