---
title: Compilatore (livello 2) avviso C4412 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4412
dev_langs:
- C++
helpviewer_keywords:
- C4412
ms.assetid: f28dc531-1a98-497b-a366-0a13e1bc81c7
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: 92aa12514088d0fbffbe826a495d76b49ab311d1
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-2-c4412"></a>Avviso del compilatore (livello 2) C4412
'funzione': funzione firma contiene il tipo 'type'. Gli oggetti C++ sono non è sicuro passare tra codice pure e mista o nativa.  
  
 Il **/clr: pure** l'opzione del compilatore è deprecato in Visual Studio 2015.  
  
 Il compilatore ha rilevato una situazione potenzialmente pericolosa che potrebbe provocare un errore di runtime: è stata effettuata una chiamata da un **/clr: pure** modulo a una funzione che è stata importata tramite dllimport e la firma della funzione contiene un tipo unsafe. Un tipo è sicuro se contiene una funzione membro o un membro dati che è un tipo unsafe o un riferimento indiretto a un tipo unsafe.  
  
 Questo non è sicuro a causa della differenza tra codice pure e native convenzioni di chiamata predefinita o misto nativo e gestito. Durante l'importazione (tramite `dllimport`) una funzione in un **/clr: pure** modulo, assicurarsi che le dichiarazioni di ogni tipo nella firma sono identiche a quelli del modulo che esporta la funzione (prestando particolare attenzione alle differenze nelle convenzioni di chiamata implicite).  
  
 Una funzione membro virtuale è particolarmente soggetta a produrre risultati imprevisti.  Tuttavia, anche una funzione non virtuale deve essere testata per assicurarsi di ottenere i risultati corretti. Se si è certi di ottenere i risultati corretti, è possibile ignorare questo avviso.  
  
 Per ulteriori informazioni su **/clr: pure**, vedere [procedura: migrare a /clr: pure (C + + CLI)](../../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md).  
  
 C4412 è disattivata per impostazione predefinita. Vedere [gli avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) e [dllexport, dllimport](../../cpp/dllexport-dllimport.md) per ulteriori informazioni.  
  
 Per risolvere il problema, rimuovere tutte le funzioni dal tipo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C4412.  
  
```  
// C4412.cpp  
// compile with: /c /W2 /clr:pure  
#pragma warning (default : 4412)  
  
struct Unsafe {  
   virtual void __cdecl Test();  
};  
  
struct Safe {  
   int i;  
};  
  
__declspec(dllimport) Unsafe * __cdecl func();  
__declspec(dllimport) Safe * __cdecl func2();  
  
int main() {  
   Unsafe *pUnsafe = func();   // C4412  
   // pUnsafe->Test();  
  
   Safe *pSafe = func2();   // OK  
}  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente è un file di intestazione che vengono dichiarati due tipi. Il `Unsafe` tipo è unsafe perché contiene una funzione membro.  
  
```  
// C4412.h  
struct Unsafe {  
   // will be __clrcall if #included in pure compilation  
   // defaults to __cdecl in native or mixed mode compilation  
   virtual void Test(int * pi);  
  
   // try the following line instead  
   // virtual void __cdecl Test(int * pi);  
};  
  
struct Safe {  
   int i;  
};  
```  
  
## <a name="example"></a>Esempio  
 In questo esempio consente di esportare funzioni con i tipi definiti nel file di intestazione.  
  
```  
// C4412_2.cpp  
// compile with: /LD  
#include "C4412.h"  
  
void Unsafe::Test(int * pi) {  
   *pi++;  
}  
  
__declspec(dllexport) Unsafe * __cdecl func() { return new Unsafe; }  
__declspec(dllexport) Safe * __cdecl func2() { return new Safe; }  
```  
  
## <a name="example"></a>Esempio  
 L'impostazione predefinita la convenzione di chiamata un **/clr: pure** compilazione è diversa da una compilazione nativa.  Quando è incluso, C4412 `Test` valore predefinito è `__clrcall`. Se viene compilato ed eseguito il programma (non utilizzare **/c**), verrà generata un'eccezione.  
  
 Nell'esempio seguente viene generato l'errore C4412.  
  
```  
// C4412_3.cpp  
// compile with: /W2 /clr:pure /c /link C4412_2.lib  
#pragma warning (default : 4412)  
#include "C4412.h"  
  
__declspec(dllimport) Unsafe * __cdecl func();  
__declspec(dllimport) Safe * __cdecl func2();  
  
int main() {  
   int n = 7;  
   Unsafe *pUnsafe = func();   // C4412  
   pUnsafe->Test(&n);  
  
   Safe *pSafe = func2();   // OK  
}  
```
