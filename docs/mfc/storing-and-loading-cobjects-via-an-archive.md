---
title: Memorizzazione e caricamento di CObjects tramite un archivio | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7a2dc227815f8888b85784ea92e58b3e91ffc83a
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954975"
---
# <a name="storing-and-loading-cobjects-via-an-archive"></a>Memorizzazione e caricamento di CObjects tramite un archivio
Memorizzazione e caricamento `CObject`s tramite un archivio richiede attenzione aggiuntiva. In alcuni casi, è necessario chiamare il `Serialize` funzione dell'oggetto, in cui la `CArchive` oggetto è un parametro del `Serialize` chiamata, anziché mediante il **< \<** o **>>** operatore del `CArchive`. L'aspetto importante da tenere presente è che il `CArchive` **>>** costrutti operatore il `CObject` in memoria in base a `CRuntimeClass` informazioni precedentemente scritte nel file dall'archivio di memorizzazione.  
  
 Pertanto, se si usano il `CArchive` **< \<** e **>>** operatori, e chiamare il metodo `Serialize`, dipende dal fatto che si *necessario* nell'archivio di caricamento per ricostruire dinamicamente l'oggetto in base a memorizzati in precedenza `CRuntimeClass` informazioni. Utilizzare il `Serialize` funzione nei casi seguenti:  
  
-   Quando la deserializzazione dell'oggetto, si conosce in anticipo la classe esatta dell'oggetto.  
  
-   Quando la deserializzazione dell'oggetto, si dispone già di memoria allocata.  
  
> [!CAUTION]
>  Se si carica l'oggetto usando la `Serialize` funzione, è anche necessario archiviare l'oggetto usando la `Serialize` (funzione). Non archiviare utilizzando il `CArchive` **<<** operatore e quindi di carico utilizzando il `Serialize` di funzione o archiviare utilizzando il `Serialize` funzione e quindi caricare usando `CArchive >>` operatore.  
  
 Nell'esempio seguente vengono illustrati i casi:  
  
 [!code-cpp[NVC_MFCSerialization#36](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_1.h)]  
  
 [!code-cpp[NVC_MFCSerialization#37](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_2.cpp)]  
  
 In breve, se la classe serializzabile definisce incorporato `CObject` come membro, è necessario *non* utilizzare il `CArchive` **< \<** e **>>** operatori per l'oggetto, ma devono chiamare il `Serialize` funzione. Inoltre, se la classe serializzabile definisce un puntatore a un `CObject` (o un oggetto derivato da `CObject`) come un membro, ma i costrutti l'altro oggetto nel costruttore, è inoltre necessario chiamare `Serialize`.  
  
## <a name="see-also"></a>Vedere anche  
 [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)

