---
title: "init_seg | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.init_seg"
  - "init_seg_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "inizializzazione di segmenti dati [C++]"
  - "init_seg (pragma)"
  - "pragma, init_seg"
ms.assetid: 40a5898a-5c85-4aa9-8d73-3d967eb13610
caps.latest.revision: 13
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# init_seg
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Specifica una parola chiave o una sezione di codice che influisce sull'ordine in cui viene eseguito il codice di avvio.  
  
## Sintassi  
  
```  
  
#pragma init_seg({ compiler | lib | user | "section-name" [, func-name]} )  
```  
  
## Note  
 In questo argomento il significato dei termini *segmento* e *sezione* sono intercambiabili.  
  
 Poiché l'inizializzazione di oggetti statici globali può includere il codice in esecuzione, è necessario specificare una parola chiave che definisce quando gli oggetti devono essere creati.  È particolarmente importante utilizzare il pragma **init\_seg** in librerie a collegamento dinamico \(DLL\) o nelle librerie che richiedono l'inizializzazione.  
  
 Le opzioni al pragma **init\_seg** sono:  
  
 **compiler**  
 Riservato per l'inizializzazione della libreria di runtime di Microsoft C  Gli oggetti in questo gruppo sono costruiti per primi.  
  
 **lib**  
 Disponibile per le inizializzazioni dei fornitori della libreria di classi di terze parti.  Gli oggetti in questo gruppo sono costruiti dopo quelli contrassegnati come **compiler** ma prima degli altri.  
  
 **utente**  
 Disponibile per qualsiasi utente.  Gli oggetti in questo gruppo sono costruiti per ultimi.  
  
 *section\-name*  
 Consente la specifica esplicita della sezione di inizializzazione.  Gli oggetti in un *section\-name* specificato dall'utente non vengono costruiti in modo implicito; tuttavia, i relativi indirizzi sono posizionati nella sezione denominata da *section\-name*.  
  
 Il nome della sezione fornita conterrà i puntatori a funzioni di supporto che costruiranno gli oggetti globali dichiarati in tale modulo dopo il pragma.  
  
 Per un elenco di nomi che non è necessario utilizzare quando si crea una sezione, vedere [\/SECTION](../build/reference/section-specify-section-attributes.md).  
  
 *func\-name*  
 Specifica una funzione da chiamare invece di `atexit` al termine del programma.  Questa funzione di supporto chiama inoltre [atexit](../c-runtime-library/reference/atexit.md) con un puntatore al distruttore per l'oggetto globale.  Se si specifica un identificatore di funzione nel pragma del modulo,  
  
```  
int __cdecl myexit (void (__cdecl *pf)(void))  
```  
  
 allora la funzione verrà chiamata al posto di `atexit` della libreria di runtime C.  Ciò consente di compilare un elenco dei distruttori che dovranno essere chiamati quando si è pronti a eliminare gli oggetti.  
  
 Se si desidera posticiparne l'inizializzazione \(ad esempio in una DLL\) è possibile scegliere di specificare il nome della sezione in modo esplicito.  È necessario quindi chiamare i costruttori per ogni oggetto statico.  
  
 Non ci sono virgolette che racchiudono l'identificatore per la sostituzione di `atexit`.  
  
 Gli oggetti verranno comunque inseriti nelle sezioni definite dagli altri pragma di XXX\_seg.  
  
 Gli oggetti dichiarati nel modulo verranno automaticamente inizializzati dal runtime di C,  che sarà necessario eseguire manualmente.  
  
 Per impostazione predefinita, le sezioni `init_seg` sono di sola lettura.  Se il nome della sezione è .CRT, il compilatore cambierà automaticamente l'attributo in sola lettura, anche se è contrassegnato come lettura, scrittura.  
  
 Non è possibile specificare più di uno volta **init\_seg** in un'unità di conversione.  
  
 Anche se l'oggetto non ha un costruttore definito dall'utente, un costruttore non definito in modo esplicito nel codice, il compilatore può generarne uno \(ad esempio per associare puntatori v\-table\).  Di conseguenza, il codice dovrà chiamare il costruttore generato dal compilatore.  
  
## Esempio  
  
```  
// pragma_directive_init_seg.cpp  
#include <stdio.h>  
#pragma warning(disable : 4075)  
  
typedef void (__cdecl *PF)(void);  
int cxpf = 0;   // number of destructors we need to call  
PF pfx[200];    // pointers to destructors.  
  
int myexit (PF pf) {  
   pfx[cxpf++] = pf;  
   return 0;  
}  
  
struct A {  
   A() { puts("A()"); }  
   ~A() { puts("~A()"); }  
};  
  
// ctor & dtor called by CRT startup code   
// because this is before the pragma init_seg  
A aaaa;   
  
// The order here is important.  
// Section names must be 8 characters or less.  
// The sections with the same name before the $  
// are merged into one section. The order that  
// they are merged is determined by sorting  
// the characters after the $.  
// InitSegStart and InitSegEnd are used to set  
// boundaries so we can find the real functions  
// that we need to call for initialization.  
  
#pragma section(".mine$a", read)  
__declspec(allocate(".mine$a")) const PF InitSegStart = (PF)1;  
  
#pragma section(".mine$z",read)  
__declspec(allocate(".mine$z")) const PF InitSegEnd = (PF)1;  
  
// The comparison for 0 is important.  
// For now, each section is 256 bytes. When they  
// are merged, they are padded with zeros. You  
// can't depend on the section being 256 bytes, but  
// you can depend on it being padded with zeros.  
  
void InitializeObjects () {  
   const PF *x = &InitSegStart;  
   for (++x ; x < &InitSegEnd ; ++x)  
      if (*x) (*x)();  
}  
  
void DestroyObjects () {  
   while (cxpf>0) {  
      --cxpf;  
      (pfx[cxpf])();  
   }  
}  
  
// by default, goes into a read only section  
#pragma init_seg(".mine$m", myexit)  
  
A bbbb;   
A cccc;  
  
int main () {  
   InitializeObjects();  
   DestroyObjects();  
}  
```  
  
  **A\(\)**  
**A\(\)**  
**A\(\)**  
**~A\(\)**  
**~A\(\)**  
**~A\(\)**   
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)