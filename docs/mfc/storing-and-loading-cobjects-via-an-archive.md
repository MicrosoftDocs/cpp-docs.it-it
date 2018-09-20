---
title: Memorizzazione e caricamento di CObjects tramite un archivio | Microsoft Docs
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
ms.openlocfilehash: e19626fab2e44bf88b4a378d094daaf7c377ad5d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46436962"
---
# <a name="storing-and-loading-cobjects-via-an-archive"></a>Memorizzazione e caricamento di CObjects tramite un archivio

Memorizzazione e caricamento `CObject`s tramite un archivio richiede considerazioni aggiuntive. In alcuni casi, è necessario chiamare il `Serialize` funzione dell'oggetto, in cui la `CArchive` oggetto è un parametro del `Serialize` chiamata, invece di usare i **< \<** o **>>** operatore del `CArchive`. Gli aspetti più importanti da tenere presente sono che il `CArchive` **>>** operatore costrutti il `CObject` in memoria in base `CRuntimeClass` informazioni scritte in precedenza il file dall'archivio di memorizzazione.

Pertanto, se Usa la `CArchive` **< \<** e **>>** operatori, rispetto a chiamare il metodo `Serialize`, dipende dal fatto che si *necessaria* nell'archivio di caricamento per dinamicamente ricostruire l'oggetto di base archiviato in precedenza `CRuntimeClass` informazioni. Usare il `Serialize` funzione nei casi seguenti:

- Durante la deserializzazione dell'oggetto, si conosce in anticipo la classe esatta dell'oggetto.

- Durante la deserializzazione dell'oggetto, si dispone già di memoria ad essa allocata.

> [!CAUTION]
>  Se si carica l'oggetto usando il `Serialize` funzione, è anche necessario archiviare l'oggetto usando il `Serialize` (funzione). Non viene archiviata utilizzando il `CArchive` **<<** operatore e quindi di carico utilizzando il `Serialize` funzionare o archiviare tramite la `Serialize` funzione e quindi caricare usando `CArchive >>` operatore.

L'esempio seguente illustra i casi:

[!code-cpp[NVC_MFCSerialization#36](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_1.h)]

[!code-cpp[NVC_MFCSerialization#37](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_2.cpp)]

In breve, se la classe serializzabile definisce incorporata `CObject` come membro, è consigliabile *non* usare il `CArchive` **< \<** e **>>** operatori per l'oggetto, ma devono chiamare il `Serialize` funzione. Inoltre, se la classe serializzabile definisce un puntatore a un `CObject` (o un oggetto derivato da `CObject`) come un membro, ma costrutti questo altro oggetto nel proprio costruttore, è anche necessario chiamare `Serialize`.

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)

