---
description: 'Altre informazioni su: uso di CObject'
title: Utilizzo di CObject
ms.date: 11/04/2016
helpviewer_keywords:
- examples [MFC], CObject
- root base class for MFC
- derived classes [MFC], from CObject
- MFC, base class
- CObject class [MFC]
ms.assetid: d0cd19bb-2856-4b41-abbc-620fd64cb223
ms.openlocfilehash: 203e2a498f787f23de21db4469e5cdd7c5543761
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97271642"
---
# <a name="using-cobject"></a>Utilizzo di CObject

[CObject](../mfc/reference/cobject-class.md) è la classe base radice per la maggior parte delle libreria Microsoft Foundation Class (MFC). La `CObject` classe contiene molte funzionalità utili che è possibile incorporare nei propri oggetti Program, tra cui il supporto della serializzazione, le informazioni sulle classi di runtime e l'output di diagnostica degli oggetti. Se si deriva la classe da `CObject` , la classe può sfruttare queste `CObject` funzionalità.

## <a name="what-do-you-want-to-do"></a>Cosa si vuole fare

- [Derivare una classe da CObject](../mfc/deriving-a-class-from-cobject.md)

- [Aggiunta del supporto per informazioni sulle classi di runtime, creazione dinamica e serializzazione alla classe derivata](../mfc/specifying-levels-of-functionality.md)

- [Informazioni sulle classi di runtime di accesso](../mfc/accessing-run-time-class-information.md)

- [Creazione dinamica di oggetti](../mfc/dynamic-object-creation.md)

- [Dump dei dati dell'oggetto per finalità diagnostiche](/previous-versions/visualstudio/visual-studio-2010/sc15kz85(v=vs.100))

- Convalidare lo stato interno dell'oggetto (vedere [MFC ASSERT_VALID e CObject:: AssertValid](reference/diagnostic-services.md#assert_valid))

- [Eseguire la serializzazione della classe nell'archivio permanente](../mfc/serialization-in-mfc.md)

- Vedere un elenco di [domande frequenti su CObject](../mfc/cobject-class-frequently-asked-questions.md)

## <a name="see-also"></a>Vedi anche

[Concetti](../mfc/mfc-concepts.md)<br/>
[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[Struttura CRuntimeClass](../mfc/reference/cruntimeclass-structure.md)<br/>
[File](../mfc/files-in-mfc.md)<br/>
[Serializzazione](../mfc/serialization-in-mfc.md)
