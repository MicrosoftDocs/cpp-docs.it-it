---
title: "Operatore __uuidof | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__LIBID_"
  - "__LIBID_cpp"
  - "__uuidof"
  - "__uuidof_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__LIBID_ (parola chiave) [C++]"
  - "__uuidof (parola chiave) [C++]"
ms.assetid: badfe709-809b-4b66-ad48-ee35039d25c6
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Operatore __uuidof
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Recupera il GUID collegato all'espressione.  
  
## Sintassi  
  
```  
  
      __uuidof (  
   expression   
)  
```  
  
## Note  
 L'*espressione* può essere un nome di tipo, un puntatore, un reference, o un array di quel tipo, un modello specializzato su questi tipi, o una variabile di questi tipi.  L'argomento è valido finché il compilatore può utilizzarlo per trovare il GUID collegato.  
  
 Un caso speciale di questa funzione intrinseca è quando **0** o **NULL** viene fornito come argomento.  In questo caso, `__uuidof` restituirà un GUID composto da zeri.  
  
 Utilizzare la parola chiave per estrarre il GUID collegato:  
  
-   Un oggetto dall'attributo esteso [uuid](../cpp/uuid-cpp.md).  
  
-   Un blocco di libreria creato con l'attributo [modulo](../windows/module-cpp.md).  
  
> [!NOTE]
>  In una compilazione con debug, `__uuidof` inizializza sempre dinamicamente un oggetto \(a runtime\).  In una build per la release, `__uuidof` può inizializzare staticamente \(in fase di compilazione\) un oggetto.  
  
## Esempio  
 Il codice seguente \(compilato con ole32.lib\) visualizza il uuid di un blocco di libreria creato con l'attributo del modulo:  
  
```  
// expre_uuidof.cpp  
// compile with: ole32.lib  
#include "stdio.h"  
#include "windows.h"  
  
[emitidl];  
[module(name="MyLib")];  
[export]  
struct stuff {  
   int i;  
};  
  
int main() {  
   LPOLESTR lpolestr;  
   StringFromCLSID(__uuidof(MyLib), &lpolestr);  
   wprintf_s(L"%s", lpolestr);  
   CoTaskMemFree(lpolestr);  
}  
```  
  
## Commenti  
 Nei casi in cui il nome della libreria non sia necessario, è possibile utilizzare \_\_LIBID\_ anziché `__uuidof`.  Ad esempio:  
  
```  
StringFromCLSID(__LIBID_, &lpolestr);  
```  
  
 **Specifica END Microsoft**  
  
## Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)