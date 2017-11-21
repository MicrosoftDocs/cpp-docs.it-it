---
title: 'Recordset: Gestione di dati di grandi dimensioni (ODBC) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- BLOB (binary large object), recordsets
- ODBC recordsets, binary large objects
- recordsets, binary large objects
- binary large objects
- CLongBinary class, using in recordsets
ms.assetid: 3e80b5a8-b6e7-43c6-a816-e54befc513a3
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 7ad1ba9120575840ac833a20061b3e1c5a547412
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="recordset-working-with-large-data-items-odbc"></a>Recordset: gestione di dati di grandi dimensioni (ODBC)
In questo argomento si applica a entrambe le classi ODBC MFC e le classi DAO MFC.  
  
> [!NOTE]
>  Se si usano le classi DAO MFC, gestire gli elementi di dati di grandi dimensioni con la classe [CByteArray](../../mfc/reference/cbytearray-class.md) anziché classe [CLongBinary](../../mfc/reference/clongbinary-class.md). Se si usano le classi ODBC MFC con righe di massa, utilizzare `CLongBinary` anziché `CByteArray`. Per ulteriori informazioni sulle righe di massa, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Si supponga che il database consente di archiviare grandi porzioni di dati, ad esempio le bitmap (fotografie dipendente, mappe, immagini di prodotti, gli oggetti OLE e così via). Questo tipo di dati viene spesso definito come un oggetto binario di grandi dimensioni (o BLOB) perché:  
  
-   Ogni valore del campo è di grandi dimensioni.  
  
-   A differenza dei numeri e altri tipi di dati semplice, non include la dimensione stimabile.  
  
-   I dati non hanno alcun formati dalla prospettiva del programma.  
  
 In questo argomento viene illustrato il supporto forniscono da classi di database per l'utilizzo di tali oggetti.  
  
##  <a name="_core_managing_large_objects"></a>La gestione degli oggetti di grandi dimensioni  
 Recordset sono due modi per risolvere le speciali difficoltà di gestione di oggetti binari di grandi dimensioni. È possibile utilizzare una classe [CByteArray](../../mfc/reference/cbytearray-class.md) o è possibile utilizzare una classe [CLongBinary](../../mfc/reference/clongbinary-class.md). In generale, `CByteArray` è il modo migliore per gestire dati binari di grandi dimensioni.  
  
 `CByteArray`richiede un sovraccarico maggiore rispetto a `CLongBinary` ma è più in grado di supportare, come descritto in [classe CByteArray](#_core_the_cbytearray_class). `CLongBinary`viene descritto brevemente nella [classe CLongBinary](#_core_the_clongbinary_class).  
  
 Per informazioni dettagliate sull'utilizzo di `CByteArray` per lavorare con gli elementi di dati di grandi dimensioni, vedere [Nota tecnica 45](../../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md).  
  
##  <a name="_core_the_cbytearray_class"></a>Classe CByteArray  
 `CByteArray`è una delle classi collection MFC. Oggetto `CByteArray` oggetto archivia una matrice di byte dinamica, ovvero la matrice può aumentare se necessario. La classe fornisce l'accesso rapido in base all'indice, come con le matrici C++ incorporate. `CByteArray`gli oggetti possono essere serializzati e il dump per scopi diagnostici. La classe fornisce le funzioni membro per il recupero e impostazione byte specificati, l'inserimento e aggiunta di byte e la rimozione di un byte o tutti i byte. Tali funzionalità semplificano l'analisi dei dati binari. Se l'oggetto binario è un oggetto OLE, ad esempio, potrebbe essere necessario esaminare i byte di intestazione per raggiungere l'oggetto effettivo.  
  
##  <a name="_core_using_cbytearray_in_recordsets"></a>Utilizzo di CByteArray in recordset  
 Fornendo il tipo di un membro dati di campo del recordset `CByteArray`, si fornisce una base fissa da cui [RFX](../../data/odbc/record-field-exchange-rfx.md) potrà gestire il trasferimento dell'oggetto tra il recordset e l'origine dati e tramite la quale è possibile modificare il dati all'interno dell'oggetto. RFX richiede un sito specifico per i dati recuperati ed è necessario un modo per accedere ai dati sottostanti.  
  
 Per informazioni dettagliate sull'utilizzo di `CByteArray` per lavorare con gli elementi di dati di grandi dimensioni, vedere [Nota tecnica 45](../../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md).  
  
##  <a name="_core_the_clongbinary_class"></a>CLongBinary (classe)  
 Oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) oggetto è un semplice un `HGLOBAL` handle per un blocco di memoria allocato nell'heap. Durante l'associazione di una colonna della tabella contenente un oggetto binario di grandi dimensioni, RFX alloca il `HGLOBAL` gestire quando è necessario trasferire i dati al recordset e archivia l'handle di `CLongBinary` campo del recordset.  
  
 A sua volta, si utilizza il `HGLOBAL` gestire, `m_hData`, per lavorare con i dati stessi, è necessario per qualsiasi gestire dati. Questa opzione è quando [CByteArray](../../mfc/reference/cbytearray-class.md) aggiunge funzionalità.  
  
> [!CAUTION]
>  CLongBinary non possono essere utilizzati come parametri nelle chiamate di funzione. Inoltre, l'implementazione, che chiama **:: SQLGetData**, necessariamente diminuisca le prestazioni di scorrimento per gli snapshot scorrevoli. Questo potrebbe anche essere vero quando si utilizza un **:: SQLGetData** chiamare per recuperare colonne dinamiche dello schema.  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [Recordset: Recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)   
 [Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)