---
title: Modifiche nell'ordine di inizializzazione costruttore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: constructors, C++
ms.assetid: 8892c38d-6bf7-4cf7-ac8f-15e052135a79
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 499855ec5052c039e007df8348db094aee356411
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="changes-in-constructor-initialization-order"></a>Modifiche nell'ordine di inizializzazione del costruttore
L'ordine di inizializzazione per i costruttori di classe è cambiato da estensioni gestite per C++ a Visual C++.  
  
## <a name="comparison-of-constructor-initialization-order"></a>Confronto dell'ordine di inizializzazione di costruttore  
 Nelle estensioni gestite per C++, l'inizializzazione di costruttore si è verificato nell'ordine seguente:  
  
1.  Il costruttore della classe di base, se presente, viene richiamato.  
  
2.  Elenco di inizializzazione della classe viene valutato.  
  
3.  Il corpo di codice del costruttore della classe viene eseguito.  
  
 In questo ordine di esecuzione segue le stesse convenzioni di programmazione in C++ nativa. Il nuovo linguaggio di Visual C++ indica l'ordine di esecuzione seguenti per le classi CLR:  
  
1.  Elenco di inizializzazione della classe viene valutato.  
  
2.  Il costruttore della classe di base, se presente, viene richiamato.  
  
3.  Il corpo di codice del costruttore della classe viene eseguito.  
  
 Si noti che questa modifica si applica solo alle classi CLR. classi native in Visual C++ ancora le convenzioni precedenti. In entrambi i casi, queste regole propagate verso l'alto la catena di tutta la gerarchia di una determinata classe.  
  
 Si consideri l'esempio di codice seguente utilizzando le estensioni gestite per C++:  
  
```  
__gc class A  
{  
public:  
   A() : _n(1)  
   {  
   }  
  
protected:  
   int _n;  
};  
  
__gc class B : public A  
{  
public:  
   B() : _m(_n)  
   {  
   }  
private:  
   int _m;  
};  
```  
  
 L'ordine di inizializzazione del costruttore stabilito sopra, seguente dovremmo vedere il seguente ordine di esecuzione di nuove istanze della classe `B` vengono costruiti:  
  
1.  Il costruttore della classe di base `A` viene richiamato. Il `_n` membro viene inizializzato con `1`.  
  
2.  Elenco di inizializzazione per la classe `B` viene valutata. Il `_m` membro viene inizializzato con `1`.  
  
3.  Il corpo di codice della classe `B` viene eseguita.  
  
 Si consideri ora lo stesso codice nella nuova sintassi di Visual C++:  
  
```  
ref class A  
{  
public:  
   A() : _n(1)  
   {  
   }  
  
protected:  
   int _n;  
};  
  
ref class B : A  
{  
public:  
   B() : _m(_n)  
   {  
   }  
private:  
   int _m;  
};  
```  
  
 L'ordine di esecuzione di nuove istanze della classe `B` vengono costruiti sotto la nuova sintassi è:  
  
1.  Elenco di inizializzazione per la classe `B` viene valutata. Il `_m` membro viene inizializzato con `0` (`0` è il valore non inizializzato il `_m` membro della classe).  
  
2.  Il costruttore della classe di base `A` viene richiamato. Il `_n` membro viene inizializzato con `1`.  
  
3.  Il corpo di codice della classe `B` viene eseguita.  
  
 Si noti che una sintassi simile produce risultati diversi per questi esempi di codice. Il costruttore della classe `B` dipende dal valore dalla classe base `A` per inizializzare il membro. Tuttavia, il costruttore di classe `A` non è stato ancora richiamato. Tale dipendenza può essere particolarmente pericolosa quando un'allocazione di memoria o risorse a cui si verificano nel costruttore della classe base dipende dalla classe ereditata.  
  
## <a name="what-this-means-going-from-managed-extensions-for-c-to-visual-c-2010"></a>Implicazioni del passaggio dalle estensioni gestite per C++ a Visual C++ 2010  
 In molti casi le modifiche all'ordine di esecuzione dei costruttori di classe devono essere trasparente al programmatore di perché le classi di base non dispongono di alcun concetto di comportamento delle classi ereditate. Tuttavia, come illustrano in questi esempi di codice, i costruttori delle classi ereditate possono essere notevolmente influenzati quando i relativi elenchi di inizializzazione dipendono dai valori dei membri della classe base. Quando si sposta il codice dalle estensioni gestite per C++ per la nuova sintassi, è consigliabile spostare tali costrutti al corpo del costruttore della classe, in cui esecuzione è garantita per essere trovarsi per ultimo.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi gestiti (C + + CL)](../dotnet/managed-types-cpp-cl.md)   
 [Costruttori](../cpp/constructors-cpp.md)   
 