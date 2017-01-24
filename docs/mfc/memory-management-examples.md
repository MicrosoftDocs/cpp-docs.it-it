---
title: "Gestione della memoria: esempi | Microsoft Docs"
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
  - "matrici [C++], allocazione di risorse"
  - "matrici [C++], gestione della memoria"
  - "strutture di dati [C++]"
  - "strutture di dati [C++], allocazione di memoria"
  - "esempi [MFC], allocazione di memoria"
  - "allocazione di frame"
  - "allocazione di heap, esempi"
  - "allocazione di memoria [C++], matrici"
  - "allocazione di memoria [C++], strutture di dati"
  - "allocazione di memoria [C++], esempi"
  - "allocazione di memoria [C++], oggetti"
  - "MFC [C++], gestione della memoria"
  - "oggetti [C++], allocazione di memoria"
  - "oggetti [C++], allocazione di memoria"
  - "allocazione di memoria struct"
  - "tipi [C++], allocazione di memoria"
ms.assetid: f10240f8-b698-4c83-9288-97a54318930b
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione della memoria: esempi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritto come MFC esegue le allocazioni e allocazioni heap di frame per ciascuno dei tre tipi comuni delle allocazioni di memoria:  
  
-   [Una matrice di byte](#_core_allocation_of_an_array_of_bytes)  
  
-   [Una struttura di dati](#_core_allocation_of_a_data_structure)  
  
-   [Un oggetto](#_core_allocation_of_an_object)  
  
##  <a name="_core_allocation_of_an_array_of_bytes"></a> Allocazione di una matrice di byte  
  
#### Per allocare una matrice di byte sul frame  
  
1.  Definire la matrice come illustrato nel codice seguente.  La matrice verrà automaticamente eliminato e la memoria viene recuperata quando la variabile di matrice esce dal relativo ambito.  
  
     [!code-cpp[NVC_MFC_Utilities#1](../mfc/codesnippet/CPP/memory-management-examples_1.cpp)]  
  
#### Per allocare una matrice di byte \(o in qualsiasi tipo di dati primitivo\) nell'heap  
  
1.  Utilizzare l'operatore di **nuova** con la sintassi delle matrici illustrata in questo esempio:  
  
     [!code-cpp[NVC_MFC_Utilities#2](../mfc/codesnippet/CPP/memory-management-examples_2.cpp)]  
  
#### Per rilasciare le matrici dall'heap  
  
1.  Utilizzare l'operatore di **eliminazione** come segue:  
  
     [!code-cpp[NVC_MFC_Utilities#3](../mfc/codesnippet/CPP/memory-management-examples_3.cpp)]  
  
##  <a name="_core_allocation_of_a_data_structure"></a> Allocazione di una struttura di dati  
  
#### Per allocare una struttura di dati sul frame  
  
1.  Definire una variabile di struttura come segue:  
  
     [!code-cpp[NVC_MFC_Utilities#4](../mfc/codesnippet/CPP/memory-management-examples_4.cpp)]  
  
     La memoria occupata dalla struttura viene recuperata quando esce dal relativo ambito.  
  
#### Per allocare le strutture di dati nell'heap  
  
1.  Utilizzare **nuova** per allocare le strutture dei dati sull'heap e su **eliminazione** per rilasciarli, come illustrato negli esempi seguenti:  
  
     [!code-cpp[NVC_MFC_Utilities#5](../mfc/codesnippet/CPP/memory-management-examples_5.cpp)]  
  
##  <a name="_core_allocation_of_an_object"></a> Allocazione di un oggetto  
  
#### Per allocare un oggetto sul frame  
  
1.  Dichiarare l'oggetto come segue:  
  
     [!code-cpp[NVC_MFC_Utilities#6](../mfc/codesnippet/CPP/memory-management-examples_6.cpp)]  
  
     Il distruttore dell'oggetto verrà richiamato quando l'oggetto esce dal relativo ambito.  
  
#### Per allocare un oggetto di l  
  
1.  Utilizzare l'operatore di **nuova**, che restituisce un puntatore all'oggetto, allocare gli oggetti nell'heap.  Utilizzare l'operatore di **eliminazione** per eliminarli.  
  
     Negli esempi di frame e dell'heap si presuppone che nel costruttore di `CPerson` non accetta argomenti.  
  
     [!code-cpp[NVC_MFC_Utilities#7](../mfc/codesnippet/CPP/memory-management-examples_7.cpp)]  
  
     Se l'argomento del costruttore di `CPerson` è un puntatore a `char`, l'istruzione per l'allocazione di frame è:  
  
     [!code-cpp[NVC_MFC_Utilities#8](../mfc/codesnippet/CPP/memory-management-examples_8.cpp)]  
  
     L'istruzione dell'allocazione heap è:  
  
     [!code-cpp[NVC_MFC_Utilities#9](../mfc/codesnippet/CPP/memory-management-examples_9.cpp)]  
  
## Vedere anche  
 [Gestione della memoria: allocazione di heap](../mfc/memory-management-heap-allocation.md)