---
description: 'Scopri di più su: Panoramica della programmazione OLE DB'
title: Cenni preliminari sulla programmazione con OLE DB
ms.date: 10/22/2018
helpviewer_keywords:
- Universal Data Access
- OLE DB, about OLE DB
ms.assetid: a5a69730-2793-4277-a67d-6f3c8edab6df
ms.openlocfilehash: 1976d8717704fbacec4f9d249b8ca3664c2eeb56
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317103"
---
# <a name="ole-db-programming-overview"></a>Cenni preliminari sulla programmazione con OLE DB

OLE DB è una tecnologia di database a prestazioni elevate e basata su COM. Consente di accedere ai dati in modo comune indipendentemente dal formato in cui sono archiviati. In una situazione di business tipica, una grande quantità di informazioni non viene archiviata nei database aziendali. Queste informazioni si trovano in file System (ad esempio FAT o NTFS), file indicizzati sequenziali, database personali (ad esempio Access), fogli di calcolo (ad esempio Excel), applicazioni di pianificazione del progetto (ad esempio, Project) e messaggi di posta elettronica (ad esempio Outlook). OLE DB consente di accedere a qualsiasi tipo di archivio dati nello stesso modo, purché l'archivio dati disponga di un provider di OLE DB.

OLE DB consente di sviluppare applicazioni che accedono a diverse origini dati, indipendentemente dal fatto che siano DBMS. OLE DB rende possibile l'accesso universale utilizzando interfacce COM che supportano la funzionalità DBMS appropriata per una determinata origine dati. COM riduce la duplicazione non necessaria dei servizi e l'interoperabilità ingrandita non solo tra le origini dati, ma anche tra le altre applicazioni.

## <a name="benefits-of-com"></a>Vantaggi di COM

Questo è il punto in cui è incluso COM. OLE DB è un set di interfacce COM. Accedendo ai dati tramite un set di interfacce uniforme, è possibile organizzare un database in una matrice di componenti cooperativi.

In base alla specifica COM, OLE DB definisce una raccolta estendibile e gestibile di interfacce che determinano e incapsulano parti coerenti e riutilizzabili delle funzionalità DBMS. Queste interfacce definiscono i limiti dei componenti DBMS, ad esempio i contenitori di righe, i processori di query e i coordinatori delle transazioni, che consentono un accesso transazionale uniforme a diverse origini informazioni.

## <a name="see-also"></a>Vedi anche

[Programmazione OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Modelli di OLE DB](../../data/oledb/ole-db-templates.md)
