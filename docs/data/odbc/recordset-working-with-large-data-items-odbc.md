---
title: "Recordset: gestione di dati di grandi dimensioni (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "oggetti binari di grandi dimensioni"
  - "BLOB (Binary Large Object - oggetti binari di grandi dimensioni), recordset"
  - "CLongBinary (classe), utilizzo in recordset"
  - "recordset ODBC, oggetti binari di grandi dimensioni"
  - "recordset, oggetti binari di grandi dimensioni"
ms.assetid: 3e80b5a8-b6e7-43c6-a816-e54befc513a3
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Recordset: gestione di dati di grandi dimensioni (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questo argomento si riferisce sia alle classi ODBC MFC che alle classi DAO MFC.  
  
> [!NOTE]
>  Se si utilizzano le classi DAO MFC, si consiglia di gestire i dati di grandi dimensioni con la classe [CByteArray](../../mfc/reference/cbytearray-class.md) anziché mediante la classe [CLongBinary](../../mfc/reference/clongbinary-class.md).  Se si utilizzano le classi ODBC MFC con il recupero di massa di righe, utilizzare `CLongBinary` anziché `CByteArray`.  Per ulteriori informazioni sul recupero di massa di righe, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Si supponga che il database sia in grado di memorizzare dati di grandi dimensioni, quali bitmap \(fotografie dei dipendenti, cartine, immagini di prodotti, oggetti OLE e così via\).  I dati di questo tipo vengono spesso definiti dati binari di grandi dimensioni o dati BLOB \(Binary Large Object\) per le ragioni indicate di seguito.  
  
-   Tutti i valori di campo sono di grandi dimensioni.  
  
-   A differenza dei numeri e di altri tipi di dati semplici, non è possibile prevederne le dimensioni.  
  
-   Dal punto di vista del programma, i dati non hanno alcun formato.  
  
 In questo argomento viene illustrato il supporto fornito dalle classi di database per l'utilizzo di tali oggetti.  
  
##  <a name="_core_managing_large_objects"></a> Gestione di oggetti di grandi dimensioni  
 I recordset dispongono di due metodi per la soluzione di particolari problemi relativi alla gestione di oggetti binari di grandi dimensioni.  È possibile utilizzare la classe [CByteArray](../../mfc/reference/cbytearray-class.md) o la classe [LongBinary](../../mfc/reference/clongbinary-class.md).  In generale, `CByteArray` rappresenta il metodo consigliato per la gestione di dati binari di grandi dimensioni.  
  
 `CByteArray` richiede più sovraccarico rispetto a `CLongBinary`, ma è più funzionale, come descritto in [Classe CByteArray](#_core_the_cbytearray_class).  `CLongBinary` è descritto brevemente in [Classe CLongBinary](#_core_the_clongbinary_class).  
  
 Per informazioni dettagliate sull'utilizzo di `CByteArray` con dati di grandi dimensioni, vedere la [Nota tecnica 45](../../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md).  
  
##  <a name="_core_the_cbytearray_class"></a> Classe CByteArray  
 `CByteArray` è una classe appartenente alla raccolta di classi MFC.  Un oggetto `CByteArray` memorizza una matrice dinamica di byte. È possibile aumentare le dimensioni della matrice, se necessario.  La classe fornisce un accesso rapido tramite l'indice, come con le matrici C\+\+ incorporate.  Gli oggetti `CByteArray` possono essere serializzati e sottoposti a dump per scopi diagnostici.  La classe fornisce le funzioni membro per il recupero e l'impostazione di byte specifici, l'inserimento e l'aggiunta di byte e la rimozione di un solo byte o di tutti i byte.  Queste funzionalità semplificano l'analisi dei dati binari.  Se ad esempio l'oggetto binario è un oggetto OLE, è necessario oltrepassare i byte di intestazione per raggiungere l'oggetto vero e proprio.  
  
##  <a name="_core_using_cbytearray_in_recordsets"></a> Utilizzo di CByteArray nei recordset  
 Se si assegna a un membro dati di campo del recordset il tipo `CByteArray`, si crea una base fissa da cui [RFX](../../data/odbc/record-field-exchange-rfx.md) potrà gestire il trasferimento dell'oggetto tra il recordset e l'origine dati e tramite la quale sarà possibile modificare e utilizzare i dati all'interno dell'oggetto.  RFX richiede una posizione specifica per memorizzare i dati recuperati, mentre per il programmatore è necessario un metodo per accedere ai dati sottostanti.  
  
 Per informazioni dettagliate sull'utilizzo di `CByteArray` con dati di grandi dimensioni, vedere la [Nota tecnica 45](../../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md).  
  
##  <a name="_core_the_clongbinary_class"></a> Classe CLongBinary  
 Un oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) è un semplice contenitore di un handle `HGLOBAL` per un blocco di memoria allocata nell'heap.  Durante l'associazione della colonna di una tabella contenente un oggetto binario di grandi dimensioni, RFX alloca l'handle `HGLOBAL` nel momento in cui è necessario trasferire i dati al recordset e lo memorizza nel campo `CLongBinary` del recordset.  
  
 A sua volta, il programmatore utilizza l'handle `HGLOBAL`, denominato `m_hData`, per lavorare con i dati stessi, utilizzandoli come un qualsiasi HANDLE.  A questo punto, entrano in gioco le funzionalità aggiuntive di [CByteArray](../../mfc/reference/cbytearray-class.md).  
  
> [!CAUTION]
>  Non è possibile utilizzare gli oggetti CLongBinary come parametri nelle chiamate alle funzioni.  Inoltre, l'implementazione di tali oggetti, che richiede **::SQLGetData**, rallenta inevitabilmente le prestazioni di scorrimento per gli snapshot scorrevoli.  Questo problema può verificarsi anche quando si utilizza una chiamata a **::SQLGetData** per recuperare le colonne dinamiche dello schema.  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: recupero di somme e altri risultati aggregati \(ODBC\)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)   
 [Trasferimento di campi di record \(RFX\)](../../data/odbc/record-field-exchange-rfx.md)