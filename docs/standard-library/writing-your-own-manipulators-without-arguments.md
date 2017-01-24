---
title: "Scrittura di manipolatori personalizzati senza gli argomenti | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "manipolatori"
ms.assetid: 2dc62d09-45b7-454d-bd9d-55f3c72c206d
caps.latest.revision: 8
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Scrittura di manipolatori personalizzati senza gli argomenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I manipolatori di scrittura che non utilizzano argomenti richiesti né la derivazione della classe né l'utilizzo delle macro complesse.  Si supponga che nella stampante richiedere ESC \<\>della coppia \[per immettere modalità grassetto.  È possibile inserire tale coppia direttamente nel flusso:  
  
```  
cout << "regular " << '\033' << '[' << "boldface" << endl;  
```  
  
 Oppure è possibile definire il manipolatore di `bold`, che inserisce i caratteri:  
  
```  
ostream& bold( ostream& os ) {  
    return os << '\033' << '[';  
}  
cout << "regular " << bold << "boldface" << endl;  
```  
  
 La funzione globale definita di `bold` accetta un argomento di riferimento di `ostream` e restituisce il riferimento di `ostream`.  Non è una funzione membro o friend perché non è richiesto l'accesso a qualsiasi elemento della classe privati.  La funzione di `bold` si connette al flusso perché l'operatore di `<<` del flusso viene sottoposto a overload per accettare il tipo di funzione, utilizzando una dichiarazione simile al seguente:  
  
```  
_Myt& operator<<(ios_base& (__cdecl *_Pfn)(ios_base&))  
{     
   // call ios_base manipulator  
   (*_Pfn)(*(ios_base *)this);  
   return (*this);  
}  
```  
  
 È possibile utilizzare questa funzionalità per estendere altri operatori di overload.  In questo caso, è `bold` fortuito che inserisce i caratteri nel flusso.  La funzione viene chiamata quando viene inserita nel flusso, non necessariamente quando i caratteri adiacenti vengono stampati.  Pertanto, la stampa potrebbe essere ritardata a causa del buffer del flusso.  
  
## Vedere anche  
 [Flussi di output](../standard-library/output-streams.md)