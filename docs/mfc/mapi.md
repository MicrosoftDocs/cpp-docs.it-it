---
title: MAPI | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- messaging [MFC], client applications
- enabling applications for MAPI [MFC]
- MAPI support in MFC
- e-mail [MFC], enabling
- mail [MFC], enabling your application
- MAPI, MFC
- enabling applications for mail [MFC]
ms.assetid: 193449f7-b131-4ab0-9301-8d4f6cd1e7c4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b2ca182da3a0300604415b790c0aba138c8fd7a2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46439107"
---
# <a name="mapi"></a>MAPI

In questo articolo viene illustrata l'interfaccia Messaging Application Programming Interface (MAPI) di Microsoft per gli sviluppatori di applicazioni di messaggistica client. MFC fornisce supporto per un sottoinsieme di MAPI nella classe `CDocument` ma non include l'intera API. Per altre informazioni, vedere [supporto MAPI in MFC](../mfc/mapi-support-in-mfc.md).

L'interfaccia MAPI è un set di funzioni che le applicazioni abilitate e che supportano la posta elettronica utilizzano per creare, modificare, trasferire e archiviare i messaggi di posta elettronica. Offre agli sviluppatori di applicazioni gli strumenti per definire lo scopo e il contenuto dei messaggi di posta elettronica e offre loro flessibilità nella gestione dei messaggi di posta elettronica archiviati. L'interfaccia MAPI inoltre fornisce un'interfaccia comune che gli sviluppatori di applicazioni possono utilizzare per creare applicazioni abilitate alla posta elettronica indipendentemente dal sistema di messaggistica sottostante.

I client di messaggistica forniscono un'interfaccia umana per l'interazione con il sistema di messaggistica (WMS) di Microsoft Windows. Questa interazione include in genere la richiesta di servizi dai provider con conformità MAPI come gli archivi messaggi e le rubriche.

Per altre informazioni su MAPI, vedere gli articoli nella Guida in messaggistica Win32 (MAPI) di Windows SDK.

## <a name="in-this-section"></a>In questa sezione

[Supporto MAPI in MFC](../mfc/mapi-support-in-mfc.md)

## <a name="see-also"></a>Vedere anche

[CDocument:: OnFileSendMail](../mfc/reference/cdocument-class.md#onfilesendmail)<br/>
[CDocument:: OnUpdateFileSendMail](../mfc/reference/cdocument-class.md#onupdatefilesendmail)<br/>
[COleDocument::OnFileSendMail](../mfc/reference/coledocument-class.md#onfilesendmail)

