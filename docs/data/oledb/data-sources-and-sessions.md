---
title: Origini dati e sessioni
ms.date: 11/19/2018
helpviewer_keywords:
- data sources [C++], OLE DB
- connections [C++], data source
- OLE DB consumer templates [C++], data sources
ms.assetid: 6ee52216-e082-4869-a1d6-ce561cfb76e5
ms.openlocfilehash: 2c11230d106b50e8120dfa9f4e283e97700d2739
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62175996"
---
# <a name="data-sources-and-sessions"></a>Origini dati e sessioni

Nella figura seguente vengono illustrate le classi che supportano la connessione e l'accesso a un'origine dati. Ogni classe si basa su un'implementazione del componente OLE DB standard.

![Classi di dati origine e di sessione](../../data/oledb/media/vcdatasourcesessionclasses.gif "le classi di origine e la sessione di dati") <br/>
Classi delle origini dati e delle sessioni

Le classi sono:

- [CDataSource](../../data/oledb/cdatasource-class.md) questa classe viene creata un'istanza dell'oggetto di origine dati, che crea e gestisce una connessione a un'origine dati tramite un provider OLE DB. L'origine dati richiede informazioni quali le informazioni origine dati indirizzo e l'autenticazione in forma di stringa di connessione.

   È anche importante notare che la classe helper [CEnumerator](../../data/oledb/cenumerator-class.md) viene spesso usata prima di stabilire la connessione per ottenere un elenco dei provider disponibili registrato in un sistema. In questo modo è possibile selezionare un provider come origine dati. Ad esempio, il **proprietà di Data Link** finestra di dialogo utilizza questa classe per popolare l'elenco dei provider nel **provider** scheda. Equivale al `SQLBrowseConnect` o `SQLDriverConnect` (funzione).

- [CSession](../../data/oledb/csession-class.md) questa classe viene creata un'istanza dell'oggetto di sessione, che rappresenta una sessione di accesso singolo all'origine dati. Tuttavia, è possibile creare più sessioni su un'origine dati. Per ogni sessione, è possibile creare set di righe, comandi e altri oggetti per accedere ai dati dall'origine dati. La sessione di gestione delle transazioni.

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)