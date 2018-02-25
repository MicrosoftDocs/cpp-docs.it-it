---
title: Origini dati e sessioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- data sources [C++], OLE DB
- connections [C++], data source
- OLE DB consumer templates [C++], data sources
ms.assetid: 6ee52216-e082-4869-a1d6-ce561cfb76e5
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f294ab4fc8777dd6d9776958d9e6e16278efb02c
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="data-sources-and-sessions"></a>Origini dati e sessioni
Nella figura seguente vengono illustrate le classi che supportano la connessione a e l'accesso a un'origine dati. Ogni classe si basa su un'implementazione di componente standard di OLE DB.  
  
 ![Classi di origine e di sessione dati](../../data/oledb/media/vcdatasourcesessionclasses.gif "vcdatasourcesessionclasses")  
Classi delle origini dati e delle sessioni  
  
 Le classi sono:  
  
-   [CDataSource](../../data/oledb/cdatasource-class.md) un'istanza dell'oggetto di origine dati, che crea e gestisce una connessione a un'origine dati tramite un provider OLE DB. L'origine dati utilizza informazioni quali le informazioni relative all'indirizzo e l'autenticazione sotto forma di stringa di connessione.  
  
     È inoltre importante notare che la classe helper [CEnumerator](../../data/oledb/cenumerator-class.md) viene spesso utilizzata prima di stabilire la connessione per ottenere un elenco dei provider disponibili registrati in un sistema. Ciò consente di selezionare un provider come origine dati. Ad esempio, il **proprietà di Data Link** la finestra di dialogo utilizza questa classe per popolare l'elenco dei provider nel **provider** scheda. È equivalente al **SQLBrowseConnect** o **SQLDriverConnect** (funzione).  
  
-   [CSession](../../data/oledb/csession-class.md) un'istanza dell'oggetto di sessione, che rappresenta una sessione di accesso singolo all'origine dati. Tuttavia, è possibile creare più sessioni su un'origine dati. Per ogni sessione, è possibile creare set di righe, comandi e altri oggetti per accedere ai dati dall'origine dati. La sessione di gestione delle transazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)