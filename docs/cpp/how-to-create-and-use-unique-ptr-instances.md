---
title: "Procedura: creare e utilizzare istanze unique_ptr | Microsoft Docs"
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
ms.assetid: 9a373030-e587-452f-b9a5-c5f9d58b7673
caps.latest.revision: 16
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: creare e utilizzare istanze unique_ptr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[unique\_ptr](../standard-library/unique-ptr-class.md) non condivide il puntatore.  Non può essere copiato in un altro `unique_ptr`, passato per valore a una funzione o utilizzato in qualsiasi algoritmo della libreria STL \(Standard Template Library\) che richiede l'esecuzione di copie.  È possibile solo spostare un oggetto `unique_ptr`.  Ciò significa che la proprietà della risorsa di memoria viene trasferita a un altro `unique_ptr` e l'oggetto `unique_ptr` originale non è più proprietario della risorsa.  Si consiglia di limitare un oggetto a un solo proprietario, poiché la proprietà multipla rende più complessa la logica del programma.  Pertanto, quando è necessario un puntatore intelligente per un oggetto C\+\+ normale, utilizzare `unique_ptr` e quando si costruisce un oggetto `unique_ptr`, utilizzare la funzione di supporto [make\_unique](../Topic/make_unique.md).  
  
 Nel diagramma seguente è illustrato il passaggio di proprietà tra due istanze di `unique_ptr`.  
  
 ![Trasferimento della proprietà di unique&#95;ptr](../cpp/media/unique_ptr.png "unique\_ptr")  
  
 `unique_ptr` viene definito nell'intestazione `<memory>` della libreria STL.  È esattamente efficiente quanto il puntatore non elaborato e può essere utilizzato nei contenitori STL.  L'aggiunta di istanze di `unique_ptr` ai contenitori STL è efficace poiché il costruttore di spostamento di `unique_ptr` elimina la necessità di un'operazione di copia.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come creare istanze di `unique_ptr` e passarle tra funzioni.  
  
 [!code-cpp[stl_smart_pointers#210](../cpp/codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_1.cpp)]  
  
 In questi esempi viene illustrata la caratteristica di base di `unique_ptr`, che può essere spostato, ma non copiato. Lo spostamento \("move"\) trasferisce la proprietà a un nuovo oggetto `unique_ptr` e reimposta l'oggetto `unique_ptr`precedente.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come creare istanze di `unique_ptr` e utilizzarle in un vettore.  
  
 [!code-cpp[stl_smart_pointers#211](../cpp/codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_2.cpp)]  
  
 Nell'intervallo per il ciclo, si noti che `unique_ptr` viene passato per riferimento.  Se si tenta di passare per valore, il compilatore genererà un errore perché il costruttore di copia `unique_ptr` viene eliminato.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come inizializzare un `unique_ptr` che è un membro di classe.  
  
 [!code-cpp[stl_smart_pointers#212](../cpp/codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_3.cpp)]  
  
## Esempio  
 È possibile utilizzare [make\_unique](../Topic/make_unique.md) per creare `unique_ptr` in una matrice, ma non è possibile utilizzare `make_unique` per inizializzare gli elementi della matrice.  
  
 [!code-cpp[stl_smart_pointers#213](../cpp/codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_4.cpp)]  
  
 Per ulteriori esempi, vedere [make\_unique](../Topic/make_unique.md).  
  
## Vedere anche  
 [Puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md)   
 [make\_unique](../Topic/make_unique.md)