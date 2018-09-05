---
title: Data e ora | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- time, MFC programming
- time
- MFC, date and time
- dates, MFC
ms.assetid: ecf56dc5-d418-4603-ad3e-af7e205a6403
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9753578de006ed46719d94d5861035ab77dbca6c
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43752252"
---
# <a name="date-and-time"></a>Data e ora

MFC supporta diversi modi di utilizzo di date e ore. Sono inclusi:

- Classi di tempo per utilizzo generico. Il [CTime](../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md) classi includono la maggior parte delle funzionalità associate con la libreria di runtime standard ANSI, che viene dichiarata nel tempo. H.

- Supporto per l'orologio di sistema. Con la versione 3.0 di MFC, è stato aggiunto il supporto per `CTime` di Win32 `SYSTEMTIME` e `FILETIME` i tipi di dati.

- Supporto per l'automazione [tipo di dati DATE](../atl-mfc-shared/date-type.md). Supporta la data, ora e valori data/ora. Il [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) e [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md) classi incapsulano questa funzionalità. Funzionano con il [COleVariant](../mfc/reference/colevariant-class.md) classe usando il supporto di automazione.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Data e ora: supporto per SYSTEMTIME](../atl-mfc-shared/date-and-time-systemtime-support.md)

- [Data e ora: supporto per l'automazione](../atl-mfc-shared/date-and-time-automation-support.md)

- [Data e ora: supporto per database](../atl-mfc-shared/date-and-time-database-support.md)

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)   
[Argomenti MFC generali](../mfc/general-mfc-topics.md)

