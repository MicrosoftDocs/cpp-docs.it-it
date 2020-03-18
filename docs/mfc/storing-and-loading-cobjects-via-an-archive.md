---
title: Memorizzazione e caricamento di CObjects tramite un archivio
ms.date: 11/04/2016
helpviewer_keywords:
- CObjects [MFC], loading through archives
- CArchive class [MFC], storing and loading objects
- Serialize method, vs. CArchive operators
- CObject class [MFC], CArchive objects
- CObjects [MFC]
ms.assetid: a829b6dd-bc31-47e0-8108-fbb946722db9
ms.openlocfilehash: 368421a86d6ff6fc70455edd0ea9a32e05645007
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446368"
---
# <a name="storing-and-loading-cobjects-via-an-archive"></a>Memorizzazione e caricamento di CObjects tramite un archivio

Per archiviare e caricare `CObject`s tramite un archivio è necessario prestare particolare attenzione. In alcuni casi, è necessario chiamare la funzione `Serialize` dell'oggetto, dove l'oggetto `CArchive` è un parametro della chiamata `Serialize`, invece di usare l' **\<<** o l'operatore **>>** del `CArchive`. Il fatto importante da tenere presente è che l'operatore `CArchive` **>>** costruisce il `CObject` in memoria in base alle informazioni `CRuntimeClass` scritte in precedenza nel file dall'archivio di archiviazione.

Se, pertanto, si utilizza il `CArchive` **<\<** e gli operatori **>>** , anziché chiamare `Serialize`, a seconda che sia *necessario* l'archivio di caricamento per ricostruire dinamicamente l'oggetto in base alle informazioni di `CRuntimeClass` archiviate in precedenza. Usare la funzione `Serialize` nei casi seguenti:

- Quando si deserializza l'oggetto, si conosce in anticipo la classe esatta dell'oggetto.

- Per la deserializzazione dell'oggetto è già stata allocata memoria.

> [!CAUTION]
>  Se si carica l'oggetto utilizzando la funzione `Serialize`, è necessario archiviare anche l'oggetto utilizzando la funzione `Serialize`. Non archiviare usando l'operatore di **<<** `CArchive` e quindi caricare usando la funzione `Serialize` oppure archiviare usando la funzione `Serialize` e quindi caricare con `CArchive >>` operatore.

Nell'esempio seguente vengono illustrati i casi:

[!code-cpp[NVC_MFCSerialization#36](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_1.h)]

[!code-cpp[NVC_MFCSerialization#37](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_2.cpp)]

In breve, se la classe serializzabile definisce un `CObject` incorporato come membro, è consigliabile *non* usare gli operatori `CArchive` **<\<** e **>>** per tale oggetto, ma chiamare invece la funzione di `Serialize`. Inoltre, se la classe serializzabile definisce un puntatore a un `CObject` (o un oggetto derivato da `CObject`) come membro, ma costruisce l'altro oggetto nel relativo costruttore, è necessario chiamare anche `Serialize`.

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
