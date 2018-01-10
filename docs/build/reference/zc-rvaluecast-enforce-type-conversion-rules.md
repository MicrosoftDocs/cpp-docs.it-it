---
title: '-Zc: rvalueCast (applicare le regole di conversione tipo) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- rvaluecast
- /Zc:rvalueCast
- VC.Project.VCCLCompilerTool.EnforceTypeConversionRules
dev_langs: C++
helpviewer_keywords:
- -Zc compiler options (C++)
- rvaluecast
- Enforce type conversion rules
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: 7825277d-e565-4c48-b0fb-76ac0b0c6e38
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8f4b888dde70708ee10b2d8000ff6380709dc870
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="zcrvaluecast-enforce-type-conversion-rules"></a>/Zc:rvalueCast (Applicare regole di conversione dei tipi)
Quando il **/Zc: rvaluecast** è specificata l'opzione, il compilatore identifica correttamente un tipo di riferimento rvalue come risultato di un'operazione cast conforme a C++ 11 standard. Quando l'opzione non è specificata, il comportamento è uguale a quello in Visual Studio 2012. Per impostazione predefinita, **/Zc: rvaluecast** è disattivata. Per verificare la conformità ed eliminare gli errori nell'utilizzo di cast, è consigliabile utilizzare **/Zc: rvaluecast**.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Zc:rvalueCast[-]  
```  
  
## <a name="remarks"></a>Note  
 Se **/Zc: rvaluecast** è specificato, il compilatore seguirà la sezione 5.4 di C++ 11 standard e considera solo le espressioni cast che come risultato tipi non di riferimento e le espressioni cast che risultato riferimenti rvalue a tipi non di funzione come tipi rvalue. Per impostazione predefinita, oppure se **/Zc:rvalueCast-** è specificato, il compilatore non è conforme e considera tutte le espressioni cast risultato riferimenti rvalue come rvalue.  
  
 Utilizzare **/Zc: rvaluecast** se si passa un'espressione cast come argomento a una funzione che accetta un tipo di riferimento rvalue. Il comportamento predefinito provoca un errore del compilatore [C2664](../../error-messages/compiler-errors-2/compiler-error-c2664.md) quando il compilatore determina in modo errato il tipo dell'espressione cast. Questo esempio mostra un errore del compilatore nel codice corretto quando l'opzione /Zc:rvalueCast non è specificata:  
  
```cpp  
// Test of /Zc:rvalueCast  
// compile by using:  
// cl /c /Zc:rvalueCast- make_thing.cpp  
// cl /c /Zc:rvalueCast make_thing.cpp  
  
#include <utility>  
  
template <typename T>   
struct Thing {  
   // Construct a Thing by using two rvalue reference parameters  
   Thing(T&& t1, T&& t2)  
      : thing1(t1), thing2(t2) {}  
  
   T& thing1;  
   T& thing2;  
};  
  
// Create a Thing, using move semantics if possible  
template <typename T>  
Thing<T> make_thing(T&& t1, T&& t2)  
{  
   return (Thing<T>(std::forward<T>(t1), std::forward<T>(t2)));  
}  
  
struct Test1 {  
   long a;  
   long b;  
  
   Thing<long> test() {   
      // Use identity casts to create rvalues as arguments  
      return make_thing(static_cast<long>(a), static_cast<long>(b));   
   }  
};  
  
```  
  
 È possibile che il comportamento predefinito del compilatore non segnali l'errore C2102 quando appropriato. In questo esempio, il compilatore non segnala un errore se l'indirizzo di un rvalue creato da un cast di identità è accettato quando **/Zc: rvaluecast** non è specificato:  
  
```cpp  
int main() {  
   int a = 1;  
   int *p = &a;   // Okay, take address of lvalue   
                  // Identity cast creates rvalue from lvalue;    
   p = &(int)a;   // problem: should cause C2102: '&' requires l-value  
}  
```  
  
 Per altre informazioni sui problemi di conformità in Visual C++, vedere [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: rvaluecast** e quindi scegliere **OK**.  
  
## <a name="see-also"></a>Vedere anche  
 [/Zc (conformità)](../../build/reference/zc-conformance.md)