---
title: "Membri statici (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "istanze di classe [C++], membri condivisi"
  - "istanze di classe [C++], membri static"
  - "membri di classi [C++], condivisi"
  - "membri di classi [C++], static"
  - "membri dati [C++], membri dati statici"
  - "costruttori di istanza, membri condivisi"
  - "costruttori di istanza, membri static"
  - "membri [C++], membri dati statici"
  - "membri dati statici [C++]"
  - "membri statici [C++], membri dati"
ms.assetid: 9cc8cf0f-d74c-46f2-8e83-42d4e42c8370
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Membri statici (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi possono contenere membri dati statici e funzioni membro.  Quando un membro dati viene dichiarato come **static**, una sola copia dei dati viene mantenuta per tutti gli oggetti della classe.  Per altre informazioni, vedere [Funzioni membro statiche](../misc/static-member-functions.md).  
  
 I membri dati statici non fanno parte degli oggetti di un tipo specifico della classe.  Di conseguenza, la dichiarazione di un membro dati statico non è considerata una definizione.  Il membro dati viene dichiarato nell'ambito della classe, ma la definizione viene fatta nell'ambito del file.  Questi membri statici hanno collegamento esterno.  Questa condizione è illustrata nell'esempio che segue.  
  
```  
// static_data_members.cpp  
class BufferedOutput  
{  
public:  
   // Return number of bytes written by any object of this class.  
   short BytesWritten()  
   {  
      return bytecount;  
   }  
  
   // Reset the counter.  
   static void ResetCount()  
   {  
      bytecount = 0;  
   }  
  
   // Static member declaration.  
   static long bytecount;  
};  
  
// Define bytecount in file scope.  
long BufferedOutput::bytecount;  
  
int main()  
{  
}  
```  
  
 Nel codice precedente, il membro `bytecount` è dichiarato nella classe `BufferedOutput`, ma deve essere definito all'esterno della dichiarazione della classe.  
  
 Ai membri dati statici è possibile accedere senza fare riferimento a un oggetto di tipo classe.  Il numero di byte scritti usando oggetti `BufferedOutput` può essere ottenuto come segue:  
  
```  
long nBytes = BufferedOutput::bytecount;  
```  
  
 Affinché il membro statico esista, non è necessario che esistano tutti gli oggetti di tipo classe.  Ai membri statici è possibile accedere usando gli operatori di selezione dei membri \(**.** e **\-\>**\).  Ad esempio:  
  
```  
BufferedOutput Console;  
  
long nBytes = Console.bytecount;  
```  
  
 Nel caso precedente, il riferimento all'oggetto \(`Console`\) non viene valutato e il valore restituito è quello dell'oggetto statico `bytecount`.  
  
 I membri dati statici sono soggetti alle regole di accesso al membro di classe, pertanto l'accesso privato ai membri dati statici è consentito solo per le funzioni friend e membro della classe.  Queste regole sono descritte in [Controllo dell'accesso ai membri](../cpp/member-access-control-cpp.md).  L'eccezione è costituita dal fatto che i membri dati statici devono essere definiti nell'ambito del file indipendentemente dalle restrizioni di accesso.  Se il membro dati viene inizializzato in modo esplicito, insieme alla definizione deve essere fornito un inizializzatore.  
  
 Il tipo di un membro statico non è qualificato dal nome della classe.  Pertanto, il tipo di `BufferedOutput::bytecount` è `long`.  
  
## Vedere anche  
 [Classi e struct](../cpp/classes-and-structs-cpp.md)