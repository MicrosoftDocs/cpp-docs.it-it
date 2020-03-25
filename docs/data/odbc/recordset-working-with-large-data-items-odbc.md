---
title: 'Recordset: gestione di dati di grandi dimensioni (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- BLOB (binary large object), recordsets
- ODBC recordsets, binary large objects
- recordsets, binary large objects
- binary large objects
- CLongBinary class, using in recordsets
ms.assetid: 3e80b5a8-b6e7-43c6-a816-e54befc513a3
ms.openlocfilehash: b84365461ce6d45fccdf1922974feff5af93f99f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212758"
---
# <a name="recordset-working-with-large-data-items-odbc"></a>Recordset: gestione di dati di grandi dimensioni (ODBC)

Questo argomento si applica sia alle classi ODBC MFC sia alle classi DAO MFC.

> [!NOTE]
>  Se si utilizzano le classi DAO MFC, gestire gli elementi di dati di grandi dimensioni con la classe [CByteArray](../../mfc/reference/cbytearray-class.md) anziché la classe [CLongBinary](../../mfc/reference/clongbinary-class.md). Se si utilizzano le classi ODBC MFC con il recupero di righe bulk, utilizzare `CLongBinary` anziché `CByteArray`. Per ulteriori informazioni sul recupero di righe in blocco, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Si supponga che il database possa archiviare grandi quantità di dati, ad esempio bitmap (fotografie dei dipendenti, mappe, immagini di prodotti, oggetti OLE e così via). Questo tipo di dati viene spesso definito Large Object binaria (o BLOB) perché:

- Ogni valore del campo è di grandi dimensioni.

- A differenza di numeri e altri tipi di dati semplici, non ha dimensioni stimabili.

- I dati non sono conformi dal punto di vista del programma.

In questo argomento viene illustrato il supporto fornito dalle classi di database per l'utilizzo di tali oggetti.

##  <a name="managing-large-objects"></a><a name="_core_managing_large_objects"></a>Gestione di oggetti di grandi dimensioni

I recordset hanno due modi per risolvere la difficoltà speciale di gestione di oggetti binari di grandi dimensioni. È possibile usare la classe [CByteArray](../../mfc/reference/cbytearray-class.md) oppure è possibile usare la classe [CLongBinary](../../mfc/reference/clongbinary-class.md). In generale, `CByteArray` è il modo migliore per gestire dati binari di grandi dimensioni.

`CByteArray` richiede un sovraccarico maggiore rispetto a `CLongBinary` ma è più idoneo, come descritto nella [classe CByteArray](#_core_the_cbytearray_class). `CLongBinary` viene descritto brevemente nella [classe CLongBinary](#_core_the_clongbinary_class).

Per informazioni dettagliate sull'uso di `CByteArray` per lavorare con elementi di dati di grandi dimensioni, vedere la [Nota tecnica 45](../../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md).

##  <a name="cbytearray-class"></a><a name="_core_the_cbytearray_class"></a>Classe CByteArray

`CByteArray` è una delle classi di raccolta MFC. Un oggetto `CByteArray` archivia una matrice di byte dinamica. se necessario, è possibile che la matrice aumenti. La classe fornisce accesso rapido in base all'indice, come per le C++ matrici predefinite. `CByteArray` gli oggetti possono essere serializzati e scaricati a scopo diagnostico. La classe fornisce funzioni membro per ottenere e impostare i byte specificati, inserire e accodare byte e rimuovere un byte o tutti i byte. Queste funzionalità semplificano l'analisi dei dati binari. Se, ad esempio, l'oggetto binario è un oggetto OLE, potrebbe essere necessario utilizzare alcuni byte di intestazione per raggiungere l'oggetto effettivo.

##  <a name="using-cbytearray-in-recordsets"></a><a name="_core_using_cbytearray_in_recordsets"></a>Utilizzo di CByteArray nei recordset

Assegnando un membro dati di campo del recordset al tipo `CByteArray`, viene fornita una base fissa da cui [RFX](../../data/odbc/record-field-exchange-rfx.md) può gestire il trasferimento di tale oggetto tra il recordset e l'origine dati e tramite cui è possibile modificare i dati all'interno dell'oggetto. RFX necessita di un sito specifico per i dati recuperati ed è necessario un modo per accedere ai dati sottostanti.

Per informazioni dettagliate sull'uso di `CByteArray` per lavorare con elementi di dati di grandi dimensioni, vedere la [Nota tecnica 45](../../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md).

##  <a name="clongbinary-class"></a><a name="_core_the_clongbinary_class"></a>Classe CLongBinary

Un oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) è una shell semplice intorno a un handle `HGLOBAL` a un blocco di archiviazione allocato nell'heap. Quando associa una colonna della tabella che contiene un oggetto binario di grandi dimensioni, RFX alloca il `HGLOBAL` handle quando deve trasferire i dati nel recordset e archivia tale handle nel campo `CLongBinary` del recordset.

A sua volta, è possibile usare l'handle di `HGLOBAL`, `m_hData`, per lavorare con i dati stessi, agendo su di essi come per i dati di handle. Questo è il punto in cui [CByteArray](../../mfc/reference/cbytearray-class.md) aggiunge le funzionalità.

> [!CAUTION]
>  Gli oggetti CLongBinary non possono essere usati come parametri nelle chiamate di funzione. Inoltre, la loro implementazione, che chiama `::SQLGetData`, rallenta necessariamente le prestazioni di scorrimento per uno snapshot scorrevole. Questo può anche essere vero quando si usa una chiamata `::SQLGetData` per recuperare le colonne dello schema dinamico.

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)<br/>
[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)
