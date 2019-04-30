---
title: Errori irreversibili del compilatore da C999 a C1999
ms.date: 04/21/2019
f1_keywords:
- C1034
- C1036
- C1041
- C1048
- C1049
- C1063
- C1069
- C1101
- C1102
- C1105
- C1110
- C1111
- C1112
- C1114
- C1193
- C1195
- C1300
- C1301
- C1302
- C1306
- C1384
- C1451
- C1505
- C1901
helpviewer_keywords:
- C1034
- C1036
- C1041
- C1048
- C1049
- C1063
- C1069
- C1101
- C1102
- C1105
- C1110
- C1111
- C1112
- C1114
- C1193
- C1195
- C1300
- C1301
- C1302
- C1306
- C1384
- C1451
- C1505
- C1901
ms.assetid: 6c8df109-7594-48ed-987a-97d9fe2b04af
ms.openlocfilehash: 5ffa1a2633877c8a16eb424f1ddc100bfd6142b8
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64344855"
---
# <a name="compiler-fatal-errors-c999-through-c1999"></a>Errori irreversibili del compilatore da C999 a C1999

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati da Microsoft C /C++ compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|[Errore irreversibile C999](../../error-messages/compiler-errors-1/fatal-error-c999.md)|ERRORE SCONOSCIUTO Per altre informazioni, scegliere Supporto tecnico dal menu ? di Visual C++ o aprire il file della Guida relativo al supporto tecnico|
|[Errore irreversibile C1001](../../error-messages/compiler-errors-1/fatal-error-c1001.md)|Si è verificato un errore interno del compilatore.<br /> (file del compilatore '*file*', riga *number*)<br /> Per evitare il problema, provare a semplificare o modificare le parti del programma indicate sopra. Per altre informazioni, scegliere Supporto tecnico dal menu ? di Visual C++ o aprire il file della Guida relativo al supporto tecnico|
|[Errore irreversibile C1002](../../error-messages/compiler-errors-1/fatal-error-c1002.md)|Il compilatore ha esaurito lo spazio dell'heap durante il passaggio 2|
|[Errore irreversibile C1003](../../error-messages/compiler-errors-1/fatal-error-c1003.md)|il conteggio degli errori supera *number*. Interruzione della compilazione|
|[Errore irreversibile C1004](../../error-messages/compiler-errors-1/fatal-error-c1004.md)|fine del file imprevista|
|[Errore irreversibile C1005](../../error-messages/compiler-errors-1/fatal-error-c1005.md)|stringa troppo grande per il buffer|
|[Errore irreversibile C1007](../../error-messages/compiler-errors-1/fatal-error-c1007.md)|'*string*' di contrassegno non riconosciuto in '*option*'|
|[Errore irreversibile C1008](../../error-messages/compiler-errors-1/fatal-error-c1008.md)|nessun file di input specificato|
|[Errore irreversibile C1009](../../error-messages/compiler-errors-1/fatal-error-c1009.md)|limite del compilatore: macro eccessivamente annidate|
|[Errore irreversibile C1010](../../error-messages/compiler-errors-1/fatal-error-c1010.md)|fine file imprevista durante la ricerca dell'intestazione precompilata. Si è omesso di aggiungere ' #include \< *file*>' all'origine?|
|[Errore irreversibile C1012](fatal-error-c1012.md)|parentesi non corrispondenti: '*character*'' mancante|
|[Errore irreversibile C1013](fatal-error-c1013.md)|limite del compilatore: troppe parentesi aperte|
|[Errore irreversibile C1014](fatal-error-c1014.md)|troppi file di inclusione: profondità = *number*|
|[Errore irreversibile C1016](fatal-error-c1016.md)|#ifdef/#ifndef previsto un identificatore|
|[Errore irreversibile C1017](../../error-messages/compiler-errors-1/fatal-error-c1017.md)|espressione costante integer non valida|
|[Errore irreversibile C1018](fatal-error-c1018.md)|#elif imprevisto|
|[Errore irreversibile C1019](fatal-error-c1019.md)|#else imprevisto|
|[Errore irreversibile C1020](fatal-error-c1020.md)|#endif imprevisto|
|[Errore irreversibile C1021](fatal-error-c1021.md)|comando per il preprocessore '*string*' non valido|
|[Errore irreversibile C1022](fatal-error-c1022.md)|previsto #endif|
|[Errore irreversibile C1023](fatal-error-c1023.md)|'*file*': errore imprevisto, provare a ricompilare il file PCH|
|[Errore irreversibile C1026](../../error-messages/compiler-errors-1/fatal-error-c1026.md)|overflow dello stack del parser. Programma troppo complesso|
|[Errore irreversibile C1033](../../error-messages/compiler-errors-1/fatal-error-c1033.md)|impossibile aprire database di programma '*file*'|
|Errore irreversibile C1034|*file*: nessun percorso impostato per i file di inclusione|
|[Errore irreversibile C1035](fatal-error-c1035.md)|espressione troppo complessa. Semplificare l'espressione|
|Errore irreversibile C1036|impossibile sovrascrivere il formato del database di programma precedente. Eliminare '*file*' e ricompilare|
|[Errore irreversibile C1037](fatal-error-c1037.md)|impossibile aprire il file oggetto '*file*'|
|[Errore irreversibile C1038](fatal-error-c1038.md)|limite del compilatore. '*function*': stato del controllo del flusso troppo complesso. Semplificare la funzione.|
|Errore irreversibile C1041|non è possibile aprire il database di programma '*file*'; se più CL.EXE scrivono nello stesso file PDB, usare /FS|
|[Errore irreversibile C1045](fatal-error-c1045.md)|limite del compilatore: specifiche di collegamento eccessivamente annidate|
|[Errore irreversibile C1046](../../error-messages/compiler-errors-1/fatal-error-c1046.md)|limite del compilatore: *structure* eccessivamente annidate|
|[Errore irreversibile C1047](fatal-error-c1047.md)|L'oggetto o il file di libreria '*file*' è stato creato con un compilatore precedente rispetto a quello usato per altri oggetti. Ricompilare i vecchi oggetti e librerie|
|Errore irreversibile C1048|opzione '*string*' sconosciuta in '*option*'|
|Errore irreversibile C1049|argomento numerico '*value*' non valido|
|[Errore irreversibile C1051](../../error-messages/compiler-errors-1/fatal-error-c1051.md)|formato obsoleto del file del database di programma '*file*'. Eliminare e ricompilare.|
|[Errore irreversibile C1052](fatal-error-c1052.md)|file di database di programma, '*filename*', è stato generato dal linker con /debug: fastlink; compilatore non può aggiornare questi file PDB;. eliminarlo o usare /Fd per specificare un nome file PDB diverso|
|[Errore irreversibile C1053](fatal-error-c1053.md)|'*function*': funzione troppo lunga|
|[Errore irreversibile C1054](../../error-messages/compiler-errors-1/fatal-error-c1054.md)|limite del compilatore: inizializzatori eccessivamente annidati|
|[Errore irreversibile C1055](../../error-messages/compiler-errors-1/fatal-error-c1055.md)|limite del compilatore: chiavi insufficienti|
|[Errore irreversibile C1057](../../error-messages/compiler-errors-1/fatal-error-c1057.md)|fine file imprevista durante l'espansione di una macro|
|[Errore irreversibile C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md)|spazio del compilatore per l'heap esaurito|
|[Errore irreversibile C1061](../../error-messages/compiler-errors-1/fatal-error-c1061.md)|limite del compilatore: blocchi eccessivamente annidati|
|Errore irreversibile C1063|limite del compilatore: overflow dello stack del compilatore|
|[Errore irreversibile C1064](../../error-messages/compiler-errors-1/fatal-error-c1064.md)|limite del compilatore: un token ha causato l'overflow del buffer interno|
|[Errore irreversibile C1065](../../error-messages/compiler-errors-1/fatal-error-c1065.md)|limite del compilatore: tag esauriti|
|[Errore irreversibile C1067](../../error-messages/compiler-errors-1/fatal-error-c1067.md)|limite del compilatore: È stato superato il limite di 64 KB per dimensioni di un record di tipo|
|[Errore irreversibile C1068](fatal-error-c1068.md)|impossibile aprire il file '*file*'|
|Errore irreversibile C1069|impossibile leggere la riga di comando del compilatore|
|[Errore irreversibile C1070](fatal-error-c1070.md)|coppia #if/#endif non corrispondente nel file '*file*'|
|[Errore irreversibile C1071](../../error-messages/compiler-errors-1/fatal-error-c1071.md)|fine file imprevista nel commento|
|[Errore irreversibile C1073](../../error-messages/compiler-errors-1/fatal-error-c1073.md)|Errore interno durante la compilazione incrementale (file del compilatore '*file*', riga *number*)|
|[Errore irreversibile C1074](fatal-error-c1074.md)|estensione 'IDB' non valida per il file PDB: *file*|
|[Errore irreversibile C1075](../../error-messages/compiler-errors-1/fatal-error-c1075.md)|alla fine del file l'elemento *token* di sinistra è senza corrispondenza|
|[Errore irreversibile C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md)|limite del compilatore: raggiunto limite interno dell'heap. Usare /Zm per specificare un limite maggiore|
|[Errore irreversibile C1077](fatal-error-c1077.md)|limite del compilatore: impossibile avere più di *number* opzioni nella riga di comando|
|[Errore irreversibile C1079](../../error-messages/compiler-errors-1/fatal-error-c1079.md)|limite del compilatore: Superato il limite delle dimensioni file PCH|
|[Errore irreversibile C1080](../../error-messages/compiler-errors-1/fatal-error-c1080.md)|limite del compilatore: superato limite di *number* caratteri per le opzioni della riga di comando|
|[Errore irreversibile C1081](../../error-messages/compiler-errors-1/fatal-error-c1081.md)|'*file*': nome di file troppo lungo|
|[Errore irreversibile C1082](fatal-error-c1082.md)|impossibile chiudere il file *type* : '*file*': *message*|
|[Errore irreversibile C1083](../../error-messages/compiler-errors-1/fatal-error-c1083.md)|impossibile aprire il file *type* : '*file*': *message*|
|[Errore irreversibile C1084](../../error-messages/compiler-errors-1/fatal-error-c1084.md)|impossibile leggere il file *type* : '*file*': *message*|
|[Errore irreversibile C1085](../../error-messages/compiler-errors-1/fatal-error-c1085.md)|impossibile scrivere nel file *type* : '*file*': *message*|
|[Errore irreversibile C1086](fatal-error-c1086.md)|impossibile spostarsi nel file *type* : '*file*': *message*|
|[Errore irreversibile C1087](fatal-error-c1087.md)|impossibile visualizzare il file *type* : '*file*': *message*|
|[Errore irreversibile C1088](fatal-error-c1088.md)|non è possibile svuotare il file *type* : '*file*': *message*|
|[Errore irreversibile C1089](fatal-error-c1089.md)|impossibile troncare il file *type* : '*file*': *message*|
|Errore irreversibile C1090|Chiamata API PDB non riuscita, codice di errore '*code*': '*message*'|
|[Errore irreversibile C1091](fatal-error-c1091.md)|limite del compilatore: la lunghezza della stringa supera i *number* byte|
|[Errore irreversibile C1092](../../error-messages/compiler-errors-1/fatal-error-c1092.md)|Con Modifica e continuazione non sono supportate le modifiche ai tipi di dati. È richiesta la compilazione|
|[Errore irreversibile C1093](../../error-messages/compiler-errors-1/fatal-error-c1093.md)|chiamata API '*function*' non riuscita '*HRESULT*': '*description*'|
|[Errore irreversibile C1094](../../error-messages/compiler-errors-1/fatal-error-c1094.md)|'-Zm*number*': opzione della riga di comando non coerente con il valore usato per compilare l'intestazione precompilata ('-Zm*number*')|
|[Errore irreversibile C1098](fatal-error-c1098.md)|Versione non conforme al motore di Modifica e continuazione|
|[Errore irreversibile C1099](fatal-error-c1099.md)|il motore di Modifica e continuazione terminerà la compilazione|
|[Errore irreversibile C1100](fatal-error-c1100.md)|impossibile inizializzare OLE: *error*|
|Errore irreversibile C1101|impossibile creare un gestore per l'attributo '*identifier*'|
|Errore irreversibile C1102|impossibile inizializzare: ' *error*'|
|[Errore irreversibile C1103](fatal-error-c1103.md)|errore irreversibile durante l'importazione del progid: '*message*'|
|[Errore irreversibile C1104](fatal-error-c1104.md)|Errore irreversibile durante l'importazione del libid: '*message*'|
|Errore irreversibile C1105|*message*: *error*|
|[Errore irreversibile C1107](../../error-messages/compiler-errors-1/fatal-error-c1107.md)|l'assembly '*assembly*' non è stato trovato: specificare il percorso di ricerca dell'assembly usando /AI o impostando la variabile di ambiente LIBPATH|
|[Errore irreversibile C1108](fatal-error-c1108.md)|impossibile trovare la DLL: '*file*'|
|[Errore irreversibile C1109](fatal-error-c1109.md)|impossibile trovare '*symbol*' nella DLL*file*|
|Errore irreversibile C1110|troppe definizioni di modello/generiche annidate|
|Errore irreversibile C1111|troppi parametri di modello/generici|
|Errore irreversibile C1112|limite del compilatore: `'number`' troppi argomenti di macro, solo *numero* consentiti|
|[Errore irreversibile C1113](../../error-messages/compiler-errors-1/fatal-error-c1113.md)|#using non riuscito in '*file*'|
|Errore irreversibile C1114|«*file*': WinRT non supporta #using di un assembly gestito|
|[Errore irreversibile C1120](../../error-messages/compiler-errors-1/fatal-error-c1120.md)|chiamata a GetProcAddress non riuscita per '*function*'|
|[Errore irreversibile C1121](../../error-messages/compiler-errors-1/fatal-error-c1121.md)|chiamata a CryptoAPI non riuscita|
|[Errore irreversibile C1126](../../error-messages/compiler-errors-1/fatal-error-c1126.md)|l'allocazione automatica supera *size*|
|[Errore irreversibile C1128](../../error-messages/compiler-errors-1/fatal-error-c1128.md)|il numero di sezioni ha superato il limite di formato del file oggetto: compilare con /bigobj|
|[Errore irreversibile C1189](../../error-messages/compiler-errors-1/fatal-error-c1189.md)|#errore: *message*|
|[Errore irreversibile C1190](fatal-error-c1190.md)|il codice gestito interessato richiede un'opzione '/clr'|
|[Errore irreversibile C1191](../../error-messages/compiler-errors-1/fatal-error-c1191.md)|'*file*' può essere importato solo in ambito globale|
|[Errore irreversibile C1192](../../error-messages/compiler-errors-1/fatal-error-c1192.md)|#using non riuscito in '*file*'|
|Errore irreversibile C1193|errore previsto in *file*(*line*) non raggiunto|
|Errore irreversibile C1195|l'uso di /Yu e /Yc sulla stessa riga di comando è incompatibile con l'opzione /clr|
|[Errore irreversibile C1196](fatal-error-c1196.md)|'*identifier*': l'identificatore trovato nella libreria dei tipi '*typelib*' non è un identificatore C++ valido|
|[Errore irreversibile C1197](../../error-messages/compiler-errors-1/fatal-error-c1197.md)|impossibile fare riferimento a '*file*' poiché il programma ha già fatto riferimento a '*file*'|
|[Errore irreversibile C1201](fatal-error-c1201.md)|impossibile continuare: errore di sintassi nella definizione di modello di classe|
|[Errore irreversibile C1202](fatal-error-c1202.md)|tipo ricorsivo o contesto delle dipendenze di una funzione troppo complesso|
|[Errore irreversibile C1205](fatal-error-c1205.md)|Generics non supportati dalla versione del runtime installata|
|[Errore irreversibile C1206](fatal-error-c1206.md)|Dati per dominio di applicazione non supportati dalla versione del runtime installata|
|[Errore irreversibile C1207](fatal-error-c1207.md)|Modelli gestiti non supportati dalla versione del runtime installata|
|[Errore irreversibile C1208](fatal-error-c1208.md)|L'allocazione delle classi di riferimento nello stack non è supportata dalla versione del runtime installata|
|[Errore irreversibile C1209](fatal-error-c1209.md)|Assembly Friend non supportati dalla versione del runtime installata|
|[Errore irreversibile C1210](fatal-error-c1210.md)|/clr:pure e /clr:safe non supportate dalla versione del runtime installata|
|[Errore irreversibile C1211](fatal-error-c1211.md)|L'attributo personalizzato TypeForwardedTo non è supportato dalla versione del runtime installata|
|Errore irreversibile C1300|errore durante l'accesso al database di programma *file* (*message*)|
|Errore irreversibile C1301|errore durante l'accesso al database di programma *file*, formato non valido, eliminare e ricompilare|
|Errore irreversibile C1302|nessun dato di profilo per il modulo '*module*' nel database di profilo '*file*'|
|[Errore irreversibile C1305](../../error-messages/compiler-errors-1/fatal-error-c1305.md)|Il database di profilo '*file*' è per un'architettura differente|
|Errore irreversibile C1306|le ultime modifiche al database di profilo '*file*' non sono state sottoposte all'analisi di ottimizzazione. L'ottimizzazione potrebbe non essere aggiornata|
|[Errore irreversibile C1307](../../error-messages/compiler-errors-1/fatal-error-c1307.md)|programma modificato dopo la raccolta dei dati di profilo|
|[Errore irreversibile C1308](../../error-messages/compiler-errors-1/fatal-error-c1308.md)|*file*: collegamento di assembly non supportato|
|[Errore irreversibile C1309](../../error-messages/compiler-errors-1/fatal-error-c1309.md)|Versioni di C2.DLL e pgodb*ver*.DLL non corrispondenti|
|[Errore irreversibile C1310](fatal-error-c1310.md)|ottimizzazione PGO non disponibile con OpenMP|
|[Errore irreversibile C1311](../../error-messages/compiler-errors-1/fatal-error-c1311.md)|formato COFF non in grado di inizializzare in modo statico '*symbol*' con *number* byte di indirizzo|
|[Errore irreversibile C1312](fatal-error-c1312.md)|La funzione contiene troppe diramazioni condizionali.  Semplificare il codice sorgente o effettuarne il refactoring.|
|[Errore irreversibile C1313](../../error-messages/compiler-errors-1/fatal-error-c1313.md)|limite del compilatore: i blocchi *type* non possono essere annidati oltre *number* livelli|
|[Errore irreversibile C1350](../../error-messages/compiler-errors-1/fatal-error-c1350.md)|errore durante il caricamento della DLL '*file*': la DLL non è stata trovata|
|[Errore irreversibile C1351](../../error-messages/compiler-errors-1/fatal-error-c1351.md)|errore durante il caricamento della dll '*file*': versione non compatibile|
|[Errore irreversibile C1352](fatal-error-c1352.md)|Istruzione MSIL non valida o danneggiata nella funzione '*function*' del modulo '*module*'|
|[Errore irreversibile C1353](fatal-error-c1353.md)|operazione sui metadati non riuscita: runtime non installato o versione non corrispondente|
|[Errore irreversibile C1382](../../error-messages/compiler-errors-1/fatal-error-c1382.md)|il file PCH '*file*' è stato ricompilato in seguito alla generazione di '*obj*'. Ricompilare l'oggetto|
|[Errore irreversibile C1383](fatal-error-c1383.md)|l'opzione del compilatore /GL è incompatibile con la versione installata di Common Language Runtime|
|Errore irreversibile C1384|Impostazione non corretta per PGO_PATH_TRANSLATION durante il collegamento di '*file*'|
|Errore irreversibile C1451|Impossibile generare informazioni di debug durante la compilazione del grafico chiamate per concurrency::parallel_for_each in: '*callsite*'|
|Errore irreversibile C1505|errore look-ahead irreversibile del parser|
|[Errore irreversibile C1506](../../error-messages/compiler-errors-1/fatal-error-c1506.md)|errore irreversibile in ambito blocco|
|[Errore irreversibile C1508](fatal-error-c1508.md)|limite del compilatore. '*function*': gli argomenti eccedono i 65535 byte|
|[Errore irreversibile C1509](../../error-messages/compiler-errors-1/fatal-error-c1509.md)|limite del compilatore: sono presenti troppi stati di gestione delle eccezioni nella funzione '*function*'. Semplificare la funzione.|
|[Errore irreversibile C1510](../../error-messages/compiler-errors-1/fatal-error-c1510.md)|Impossibile aprire il file clui.dll della risorsa di lingua|
|[Errore irreversibile C1601](../../error-messages/compiler-errors-1/fatal-error-c1601.md)|codice operativo dell'assembly inline non supportato|
|[Errore irreversibile C1602](../../error-messages/compiler-errors-1/fatal-error-c1602.md)|intrinseco non supportato|
|[Errore irreversibile C1603](../../error-messages/compiler-errors-1/fatal-error-c1603.md)|destinazione branch assembly inline non inclusa nell'intervallo per *number* byte|
|[Errore irreversibile C1852](fatal-error-c1852.md)|file di intestazione precompilata '*file*' non valido|
|[Errore irreversibile C1853](../../error-messages/compiler-errors-1/fatal-error-c1853.md)|il file di intestazione precompilata '*file*' appartiene a una precedente versione del compilatore oppure l'intestazione precompilata è C++ e si usa C (o viceversa)|
|[Errore irreversibile C1854](../../error-messages/compiler-errors-1/fatal-error-c1854.md)|non è possibile sovrascrivere le informazioni generate durante la creazione dell'intestazione precompilata nel file oggetto '*file*'|
|[Errore irreversibile C1900](../../error-messages/compiler-errors-1/fatal-error-c1900.md)|errata corrispondenza tra '*tool*' versione '*number*' e '*tool*' versione '*number*'|
|Errore irreversibile C1901|Errore interno di gestione della memoria|
|[Errore irreversibile C1902](../../error-messages/compiler-errors-1/fatal-error-c1902.md)|Gestore database di programma incompatibile. Verificare l'installazione|
|[Errore irreversibile C1903](fatal-error-c1903.md)|impossibile recuperare l'errore o gli errori precedenti. Interruzione della compilazione|
|[Errore irreversibile C1904](fatal-error-c1904.md)|interazione del provider errata: '*file*'|
|[Errore irreversibile C1905](../../error-messages/compiler-errors-1/fatal-error-c1905.md)|Front end e back end non compatibili (il processore di destinazione deve essere lo stesso).|

## <a name="see-also"></a>Vedere anche

[C /C++ del compilatore e compilazione di errori e avvisi degli strumenti](../compiler-errors-1/c-cpp-build-errors.md)
