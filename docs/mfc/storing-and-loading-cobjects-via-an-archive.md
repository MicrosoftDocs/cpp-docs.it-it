---
description: 'Altre informazioni su: archiviazione e caricamento di CObject tramite un archivio'
title: Memorizzazione e caricamento di CObjects tramite un archivio
ms.date: 11/04/2016
helpviewer_keywords:
- CObjects [MFC], loading through archives
- CArchive class [MFC], storing and loading objects
- Serialize method, vs. CArchive operators
- CObject class [MFC], CArchive objects
- CObjects [MFC]
ms.assetid: a829b6dd-bc31-47e0-8108-fbb946722db9
ms.openlocfilehash: c84c507fc556268eea526c1350211fd4b82f54fe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216561"
---
# <a name="storing-and-loading-cobjects-via-an-archive"></a>Memorizzazione e caricamento di CObjects tramite un archivio

Per archiviare e caricare `CObject` i tramite un archivio è necessario prestare particolare attenzione. In alcuni casi, è necessario chiamare la `Serialize` funzione dell'oggetto, dove l' `CArchive` oggetto è un parametro della `Serialize` chiamata, anziché usare l' **<\<** or **>>** operatore di `CArchive` . Il fatto importante da tenere presente è che l' `CArchive` **>>** operatore costruisce la `CObject` in memoria in base alle `CRuntimeClass` informazioni scritte in precedenza nel file dall'archivio di archiviazione.

Se pertanto si utilizzano gli `CArchive` **<\<** and **>>** operatori, anziché chiamare `Serialize` , a seconda che sia *necessario* l'archivio di caricamento per ricostruire dinamicamente l'oggetto in base alle informazioni archiviate in precedenza `CRuntimeClass` . Usare la `Serialize` funzione nei casi seguenti:

- Quando si deserializza l'oggetto, si conosce in anticipo la classe esatta dell'oggetto.

- Per la deserializzazione dell'oggetto è già stata allocata memoria.

> [!CAUTION]
> Se si carica l'oggetto utilizzando la `Serialize` funzione, è necessario archiviare anche l'oggetto utilizzando la `Serialize` funzione. Non archiviare usando l' `CArchive` **<<** operatore e quindi caricare usando la `Serialize` funzione o l'archivio usando la `Serialize` funzione e quindi caricando l' `CArchive >>` operatore using.

Nell'esempio seguente vengono illustrati i casi:

[!code-cpp[NVC_MFCSerialization#36](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_1.h)]

[!code-cpp[NVC_MFCSerialization#37](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_2.cpp)]

In breve, se la classe serializzabile definisce un `CObject` oggetto incorporato come membro, è consigliabile *non* usare gli `CArchive` **<\<** and **>>** operatori per tale oggetto, ma chiamare `Serialize` invece la funzione. Inoltre, se la classe serializzabile definisce un puntatore a un `CObject` oggetto (o a un oggetto derivato da `CObject` ) come membro, ma costruisce l'altro oggetto nel relativo costruttore, è necessario chiamare anche `Serialize` .

## <a name="see-also"></a>Vedi anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
