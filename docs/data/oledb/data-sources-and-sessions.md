---
description: 'Altre informazioni su: origini dati e sessioni'
title: Origini dati e sessioni
ms.date: 11/19/2018
helpviewer_keywords:
- data sources [C++], OLE DB
- connections [C++], data source
- OLE DB consumer templates [C++], data sources
ms.assetid: 6ee52216-e082-4869-a1d6-ce561cfb76e5
ms.openlocfilehash: 352bce1140ef8aebdc198ad237f4a427d5f9c440
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287658"
---
# <a name="data-sources-and-sessions"></a>Origini dati e sessioni

Nella figura seguente sono illustrate le classi che supportano la connessione e l'accesso a un'origine dati. Ogni classe è basata su un'implementazione standard di OLE DB Component.

![Classi di origini dati e sessioni](../../data/oledb/media/vcdatasourcesessionclasses.gif "Classi delle origini dati e delle sessioni") <br/>
Classi delle origini dati e delle sessioni

Le classi sono:

- [CDataSource](../../data/oledb/cdatasource-class.md) Questa classe crea un'istanza dell'oggetto origine dati che crea e gestisce una connessione a un'origine dati tramite un provider OLE DB. L'origine dati acquisisce informazioni quali l'indirizzo dell'origine dati e le informazioni di autenticazione sotto forma di stringa di connessione.

   È inoltre importante notare che la classe helper [CEnumerator](../../data/oledb/cenumerator-class.md) viene spesso utilizzata prima che venga stabilita una connessione per ottenere un elenco dei provider disponibili registrati in un sistema. In questo modo è possibile selezionare un provider come origine dati. La finestra di dialogo **proprietà di data link** , ad esempio, utilizza questa classe per popolare l'elenco di provider nella scheda **provider** . Equivale alla `SQLBrowseConnect` `SQLDriverConnect` funzione o.

- [CSession](../../data/oledb/csession-class.md) Questa classe crea un'istanza dell'oggetto Session, che rappresenta una singola sessione di accesso all'origine dati. Tuttavia, è possibile creare più sessioni in un'origine dati. Per ogni sessione è possibile creare set di righe, comandi e altri oggetti per accedere ai dati dall'origine dati. La sessione gestisce le transazioni.

## <a name="see-also"></a>Vedi anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)
