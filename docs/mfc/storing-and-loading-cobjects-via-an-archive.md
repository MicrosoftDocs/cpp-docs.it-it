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
ms.openlocfilehash: f1b59516d5bba13b6f5e006f91d8ebd560543b05
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372152"
---
# <a name="storing-and-loading-cobjects-via-an-archive"></a>Memorizzazione e caricamento di CObjects tramite un archivio

L'archiviazione `CObject`e il caricamento di s tramite un archivio richiede una considerazione aggiuntiva. In alcuni casi, è `Serialize` necessario chiamare la `CArchive` funzione dell'oggetto `Serialize` , dove l'oggetto ** < ** è **>>** un parametro della chiamata, anziché utilizzare l'operatore o dell'oggetto `CArchive`. Il fatto importante da tenere `CArchive` **>>** a mente `CObject` è che `CRuntimeClass` l'operatore costruisce l'in memoria in base alle informazioni precedentemente scritte nel file dall'archivio di archiviazione.

Pertanto, `CArchive` ** < ** l'utilizzo **>>** degli operatori `Serialize`e , rispetto alla chiamata , dipende dalla *necessità* dell'archivio di caricamento per ricostruire dinamicamente l'oggetto in base alle informazioni archiviate `CRuntimeClass` in precedenza. Utilizzare `Serialize` la funzione nei seguenti casi:

- Quando si deserializza l'oggetto, si conosce in anticipo la classe esatta dell'oggetto.

- Quando si deserializza l'oggetto, si dispone già di memoria allocata per esso.

> [!CAUTION]
> Se si carica l'oggetto utilizzando la `Serialize` funzione, `Serialize` è necessario archiviare anche l'oggetto utilizzando la funzione . Non archiviare utilizzando `CArchive` **<<** l'operatore `Serialize` e quindi caricare `Serialize` utilizzando la funzione `CArchive >>` o archiviare utilizzando la funzione e quindi caricare utilizzando l'operatore.

Nell'esempio seguente vengono illustrati i casi:

[!code-cpp[NVC_MFCSerialization#36](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_1.h)]

[!code-cpp[NVC_MFCSerialization#37](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_2.cpp)]

In sintesi, se la classe serializzabile `CObject` definisce un embedded come membro, *non* è necessario utilizzare gli `CArchive` ** < ** operatori e **>>** per tale oggetto, ma chiamare invece la `Serialize` funzione. Inoltre, se la classe serializzabile definisce `CObject` un puntatore `CObject`a un (o un oggetto derivato da ) come `Serialize`membro , ma costruisce l'altro oggetto nel proprio costruttore, è necessario chiamare anche .

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)
