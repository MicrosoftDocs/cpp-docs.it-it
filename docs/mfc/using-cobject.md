---
title: Utilizzo di CObject | Microsoft Docs
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
- examples [MFC], CObject
- root base class for MFC
- derived classes [MFC], from CObject
- MFC, base class
- CObject class [MFC]
ms.assetid: d0cd19bb-2856-4b41-abbc-620fd64cb223
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0f421624f16a11f02dc260ce95a9d2cf11fcd9fd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46399132"
---
# <a name="using-cobject"></a>Utilizzo di CObject

[CObject](../mfc/reference/cobject-class.md) è la classe di base di radice per la maggior parte di Microsoft Foundation classe libreria (MFC). Il `CObject` classe contiene molte funzionalità utili che è possibile incorporare in programma oggetti personalizzati, inclusi il supporto della serializzazione, informazioni sulle classi di runtime e diagnostica output dell'oggetto. Se si deriva la classe da `CObject`, la classe può sfruttare queste funzionalità `CObject` funzionalità.

## <a name="what-do-you-want-to-do"></a>Ciò che si desidera eseguire

- [Derivare una classe da CObject](../mfc/deriving-a-class-from-cobject.md)

- [Aggiungere il supporto per la serializzazione, la creazione dinamica e le informazioni sulla classe di runtime per la classe derivata](../mfc/specifying-levels-of-functionality.md)

- [Informazioni sulle classi in fase di esecuzione di accesso](../mfc/accessing-run-time-class-information.md)

- [Creare gli oggetti in modo dinamico](../mfc/dynamic-object-creation.md)

- [Eseguire il dump dei dati dell'oggetto per scopi diagnostici](/previous-versions/visualstudio/visual-studio-2010/sc15kz85\(v=vs.100\))

- Convalidare lo stato interno dell'oggetto (vedere [ASSERT_VALID e MFC CObject:: AssertValid](reference/diagnostic-services.md#assert_valid))

- [Hanno la classe di serializzarsi in un archivio permanente](../mfc/serialization-in-mfc.md)

- Visualizzare un elenco di [domande frequenti su CObject](../mfc/cobject-class-frequently-asked-questions.md)

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)<br/>
[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[Struttura CRuntimeClass](../mfc/reference/cruntimeclass-structure.md)<br/>
[File](../mfc/files-in-mfc.md)<br/>
[Serializzazione](../mfc/serialization-in-mfc.md)

