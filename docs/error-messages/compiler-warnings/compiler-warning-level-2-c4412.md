---
title: "Avviso del compilatore (livello 2) C4412 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4412"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4412"
ms.assetid: f28dc531-1a98-497b-a366-0a13e1bc81c7
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 2) C4412
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': la firma della funzione contiene il tipo 'tipo'; non è sicuro passare oggetti di C\+\+ tra codice pure e codice misto o nativo.  
  
 Il compilatore ha rilevato una situazione potenzialmente pericolosa che potrebbe provocare un errore di runtime. È in corso l'esecuzione di una chiamata da un modulo **\/clr:pure** a una funzione importata tramite dllimport, ma la firma della funzione contiene un tipo unsafe.  Un tipo viene considerato unsafe se contiene una funzione membro o se dispone di un membro dati corrispondente a un tipo unsafe o a un riferimento indiretto a un tipo unsafe.  
  
 Questa situazione è pericolosa in quanto le convenzioni di chiamata predefinite del codice pure differiscono da quelle del codice nativo o del codice misto nativo e gestito.  Durante l'importazione di una funzione tramite `dllimport` in un modulo **\/clr:pure**, assicurarsi che le dichiarazioni di ciascun tipo presente nella firma siano identiche a quelle del modulo che esporta la funzione, prestando particolare attenzione alle differenze nelle convenzioni di chiamata implicite.  
  
 Le funzioni membro virtuali sono particolarmente soggette a risultati imprevisti.  Tuttavia, per garantire la correttezza dei risultati, è opportuno testare anche le funzioni non virtuali.  Se i risultati sono corretti, è possibile ignorare questo avviso.  
  
 Per ulteriori informazioni su **\/clr:pure**, vedere [Procedura: migrare a \/clr:pure](../../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md).  
  
 Per impostazione predefinita, l'avviso C4412 non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) e [dllexport, dllimport](../../cpp/dllexport-dllimport.md).  
  
 Per risolvere il problema, rimuovere tutte le funzioni dal tipo.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4412:  
  
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
  
## Esempio  
 Nell'esempio riportato di seguito viene illustrato un file di intestazione che dichiara due tipi.  Il tipo `Unsafe` è unsafe perché contiene una funzione membro.  
  
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
  
## Esempio  
 In questo esempio vengono esportate le funzioni con i tipi definiti nel file di intestazione.  
  
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
  
## Esempio  
 La convenzione di chiamata predefinita in una compilazione **\/clr:pure** differisce da quella di una compilazione nativa.  Quando C4412.h è incluso, `Test` viene impostato sul valore predefinito `__clrcall`.  Se questo programma viene compilato ed eseguito, senza utilizzare **\/c**, verrà generata un'eccezione.  
  
 Nell'esempio seguente viene generato l'errore C4412:  
  
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