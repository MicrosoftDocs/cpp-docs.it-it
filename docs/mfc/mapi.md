---
description: 'Altre informazioni su: MAPI'
title: MAPI
ms.date: 11/04/2016
helpviewer_keywords:
- messaging [MFC], client applications
- enabling applications for MAPI [MFC]
- MAPI support in MFC
- e-mail [MFC], enabling
- mail [MFC], enabling your application
- MAPI, MFC
- enabling applications for mail [MFC]
ms.assetid: 193449f7-b131-4ab0-9301-8d4f6cd1e7c4
ms.openlocfilehash: 634d5d0b2dbbc8a262f624be2b7e294ef6069b96
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97280807"
---
# <a name="mapi"></a>MAPI

In questo articolo viene illustrata l'interfaccia Messaging Application Programming Interface (MAPI) di Microsoft per gli sviluppatori di applicazioni di messaggistica client. MFC fornisce supporto per un subset di MAPI nella classe `CDocument` ma non incapsula l'intera API. Per ulteriori informazioni, vedere [supporto MAPI in MFC](mapi-support-in-mfc.md).

L'interfaccia MAPI è un set di funzioni che le applicazioni abilitate e che supportano la posta elettronica utilizzano per creare, modificare, trasferire e archiviare i messaggi di posta elettronica. Offre agli sviluppatori di applicazioni gli strumenti per definire lo scopo e il contenuto dei messaggi di posta elettronica e offre loro flessibilità nella gestione dei messaggi di posta elettronica archiviati. L'interfaccia MAPI inoltre fornisce un'interfaccia comune che gli sviluppatori di applicazioni possono utilizzare per creare applicazioni abilitate alla posta elettronica indipendentemente dal sistema di messaggistica sottostante.

I client di messaggistica forniscono un'interfaccia umana per l'interazione con il sistema di messaggistica (WMS) di Microsoft Windows. Questa interazione include in genere la richiesta di servizi dai provider con conformità MAPI come gli archivi messaggi e le rubriche.

Per ulteriori informazioni su MAPI, vedere gli articoli in Guida di messaggistica Win32 (MAPI) del Windows SDK.

## <a name="in-this-section"></a>Contenuto della sezione

[Supporto MAPI in MFC](mapi-support-in-mfc.md)

## <a name="see-also"></a>Vedi anche

[CDocument:: OnFileSendMail](reference/cdocument-class.md#onfilesendmail)<br/>
[CDocument:: OnUpdateFileSendMail](reference/cdocument-class.md#onupdatefilesendmail)<br/>
[COleDocument:: OnFileSendMail](reference/coledocument-class.md#onfilesendmail)
