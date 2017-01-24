---
title: "Memorizzazione e caricamento di CObjects tramite un archivio | Microsoft Docs"
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
  - "CObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CArchive (classe), memorizzazione e caricamento di oggetti"
  - "CObject (classe), oggetti CArchive"
  - "CObjects"
  - "CObjects, caricamento tramite archivi"
  - "Serialize (metodo), e operatori CArchive"
ms.assetid: a829b6dd-bc31-47e0-8108-fbb946722db9
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Memorizzazione e caricamento di CObjects tramite un archivio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Archiviare e `CObject`caricare o tramite un archivio richiedono una considerazione aggiuntiva.  In alcuni casi, è consigliabile chiamare la funzione di `Serialize` oggetto, in cui l'oggetto di `CArchive` è un parametro della chiamata di `Serialize`, in contrapposizione a utilizzare l'operatore di **\>\>** o di **\<\<** di `CArchive`.  Il fatto importante tenere presente che l'operatore di `CArchive` **\>\>** costruisce `CObject` in memoria in base alle informazioni di `CRuntimeClass` precedentemente scritte nel file dall'archivio archiviando.  
  
 Pertanto, se si utilizza `CArchive` **\<\<** e operatori di **\>\>**, rispetto a chiamare `Serialize`, varia a seconda che è necessario disporre dell'archivio di caricamento di ricostruirla dinamicamente l'oggetto di informazioni memorizzate in precedenza di `CRuntimeClass`.  Utilizzare la funzione di `Serialize` nei seguenti casi:  
  
-   In deserializzare l'oggetto, conosce in anticipo la classe esatta dell'oggetto.  
  
-   In deserializzare l'oggetto, si dispone già di memoria allocata per.  
  
> [!CAUTION]
>  Se si carica l'oggetto utilizzando la funzione di `Serialize`, è necessario anche possibile memorizzare l'oggetto utilizzando la funzione di `Serialize`.  Non memorizzare utilizzando l'operatore di `CArchive` **\<\<** quindi non caricare utilizzando la funzione di `Serialize`, o dell'archivio utilizzando la funzione di `Serialize` quindi non caricare utilizzando l'operatore di **CArchive \>\>**.  
  
 Nell'esempio seguente vengono illustrati i casi:  
  
 [!code-cpp[NVC_MFCSerialization#36](../mfc/codesnippet/CPP/storing-and-loading-cobjects-via-an-archive_1.h)]  
  
 [!code-cpp[NVC_MFCSerialization#37](../mfc/codesnippet/CPP/storing-and-loading-cobjects-via-an-archive_2.cpp)]  
  
 In breve, se la classe definisce serializzabile **CObjec**incorporato t come membro, non è necessario utilizzare `CArchive` **\<\<** e gli operatori di **\>\>** per tale oggetto, ma è necessario chiamare la funzione di `Serialize` invece.  Inoltre, se la classe serializzabile definisce un puntatore a `CObject` \(o a un oggetto derivato da `CObject`\) come membro, ma crea questo altro oggetto nel relativo costruttore, è necessario chiamare anche `Serialize`.  
  
## Vedere anche  
 [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)