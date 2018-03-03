---
title: Memorizzazione e caricamento di CObjects tramite un archivio | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CObject
dev_langs:
- C++
helpviewer_keywords:
- CObjects [MFC], loading through archives
- CArchive class [MFC], storing and loading objects
- Serialize method, vs. CArchive operators
- CObject class [MFC], CArchive objects
- CObjects [MFC]
ms.assetid: a829b6dd-bc31-47e0-8108-fbb946722db9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 987f754ccdf03e5a252feae693a1f7718da1b353
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="storing-and-loading-cobjects-via-an-archive"></a>Memorizzazione e caricamento di CObjects tramite un archivio
Memorizzazione e caricamento `CObject`tramite un archivio richiede attenzione aggiuntiva. In alcuni casi, è necessario chiamare il `Serialize` funzione dell'oggetto, in cui il `CArchive` oggetto è un parametro del `Serialize` chiamata, anziché mediante il  **< \<**  o  **>>**  operatore il `CArchive`. L'aspetto importante da tenere presente è che il `CArchive`  **>>**  operatore costrutti di `CObject` in memoria in base a `CRuntimeClass` informazioni precedentemente scritte per il file dall'archivio di memorizzazione.  
  
 Pertanto, se si usano i `CArchive`  **< \<**  e  **>>**  , operatori e chiamare il metodo `Serialize`, dipende dal fatto che si *necessario* nell'archivio di caricamento per ricostruire dinamicamente l'oggetto in base a memorizzati in precedenza `CRuntimeClass` informazioni. Utilizzare il `Serialize` funzione nei casi seguenti:  
  
-   Quando la deserializzazione dell'oggetto, si conosce in anticipo la classe esatta dell'oggetto.  
  
-   Quando la deserializzazione dell'oggetto, si dispone di memoria allocata.  
  
> [!CAUTION]
>  Se si carica l'oggetto utilizzando il `Serialize` funzione, è inoltre necessario archiviare l'oggetto utilizzando il `Serialize` (funzione). Non archiviare utilizzando il `CArchive`  **<<**  operatore e quindi di carico utilizzando il `Serialize` di funzione o archiviare utilizzando il `Serialize` funzione e quindi caricare usando **CArchive >>**operatore.  
  
 L'esempio seguente illustra i casi:  
  
 [!code-cpp[NVC_MFCSerialization#36](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_1.h)]  
  
 [!code-cpp[NVC_MFCSerialization#37](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_2.cpp)]  
  
 In breve, se la classe serializzabile definisce incorporato **CObjec**t come membro, è necessario *non* utilizzare il `CArchive`  **< \<**  e  **>>**  operatori per l'oggetto, ma devono chiamare il `Serialize` funzione alternativa. Inoltre, se la classe serializzabile definisce un puntatore a un `CObject` (o un oggetto derivato da `CObject`) come un membro, ma i costrutti l'altro oggetto nel costruttore, è inoltre necessario chiamare `Serialize`.  
  
## <a name="see-also"></a>Vedere anche  
 [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)

