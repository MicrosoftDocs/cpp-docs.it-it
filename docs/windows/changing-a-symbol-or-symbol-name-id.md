---
title: Modifica di un simbolo
ms.date: 11/04/2016
f1_keywords:
- vc.editors.symbol.changing
- vc.editors.symbol.restrictions.name
- vc.editors.symbol.changing.value
- vc.editors.symbol.restrictions.value
- vc.editors.symbol.changing.header
helpviewer_keywords:
- symbol names
- symbols [C++], names
- restrictions, symbol names
- numeric values
- symbols [C++], numeric values
- numeric values, changing symbols
- symbols [C++], value restrictions
- restrictions, symbol values
- resource files [C++], multiple
- Resource Includes dialog box [C++]
- symbol header files [C++], changing names
- symbols [C++], symbol header files
- Resource.h
ms.assetid: 26541832-8dba-4177-b642-e08f94502ea7
ms.openlocfilehash: 7d2890c2d2c05f1ee0309446dfe2de9917f85707
ms.sourcegitcommit: 63c072f5e941989636f5a2b13800b68bb7129931
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/06/2019
ms.locfileid: "55763986"
---
# <a name="changing-a-symbol"></a>Modifica di un simbolo

Quando si crea una nuova risorsa o un oggetto risorsa, l'ambiente di sviluppo gli assegna un nome di simbolo predefinito, ad esempio IDD_DIALOG1. È possibile usare la [finestra proprietà](/visualstudio/ide/reference/properties-window) per modificare il nome del simbolo predefinito o per modificare il nome di qualsiasi simbolo già associato a una risorsa.

Per simboli associati a una sola risorsa, è anche possibile usare la **proprietà** finestra per modificare il valore di simbolo. È possibile usare la [finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md) per modificare il valore dei simboli non attualmente assegnati a una risorsa. Per altre informazioni, vedere [modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).

In genere tutti i simboli le definizioni vengono salvate in `Resource.h`. Tuttavia, potrebbe essere necessario modificare il nome file di inclusione in modo da poter, ad esempio, usare più file di risorse nella stessa directory.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

## <a name="to-change-a-resources-symbol-name-id"></a>Per modificare il nome di simbolo di una risorsa (ID)

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), selezionare la risorsa.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Nel **delle proprietà** finestra, digitare un nuovo nome di simbolo o selezionare dall'elenco dei simboli esistenti nella **ID** casella.

   Se si digita il nuovo nome di un simbolo, gli viene assegnato automaticamente un valore.

È possibile usare la [finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md) per modificare i nomi dei simboli non attualmente assegnati a una risorsa. Per altre informazioni, vedere [modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).

### <a name="symbol-name-restrictions"></a>Restrizioni relative ai nomi di simbolo

I nomi dei simboli sono soggetti alle restrizioni riportate di seguito.

- Tutti i [simboli](../windows/symbols-resource-identifiers.md) deve essere univoco all'interno dell'ambito dell'applicazione. In questo modo si evitano conflitti tra le definizioni dei simboli nei file di intestazione.

- I caratteri validi per il nome di un simbolo includono i caratteri maiuscoli e minuscoli dalla A alla Z, i numeri da 0 a 9 e i caratteri di sottolineatura ( _ ).

- I nomi dei simboli non possono iniziare con un numero e sono limitati a 247 caratteri.

- I nomi dei simboli non possono contenere spazi.

- Ai nomi dei simboli non viene applicata la distinzione tra maiuscole e minuscole. I caratteri maiuscoli o minuscoli della prima definizione del simbolo vengono tuttavia mantenuti. Il file di intestazione che definisce i simboli viene usato sia dal compilatore e dall'editor di risorse sia da uno o più programmi C++ per fare riferimento alle risorse definite in un file di risorse. Se due nomi di simbolo differiscono solo nell'utilizzo di lettere maiuscole e minuscole, nel programma C++ verranno visualizzati due simboli separati, mentre nel compilatore e nell'editor di risorse verranno visualizzati entrambi i nomi come se facessero riferimento a un unico simbolo.

   > [!NOTE]
   > Se non ci si attiene allo schema dei nomi di simbolo standard illustrato di seguito (ID*_[parola chiave]) e il nome del simbolo coincide con una parola chiave nota al compilatore dello script di risorsa, il tentativo di compilare il file script di risorsa determinerà una generazione di errori apparentemente casuale, difficile da diagnosticare. Per evitare questo problema, è necessario attenersi allo schema di denominazione standard.

I nomi dei simboli dispongono di prefissi descrittivi che indicano il tipo di risorsa o di oggetto che rappresentano. Tali prefissi descrittivi iniziano con l'ID di combinazione testo. La libreria MFC usa le convenzioni di denominazione dei simboli illustrate nella tabella seguente.

|Category|Prefisso|Usa|
|--------------|------------|---------|
|Risorse|IDR_ IDD_ IDC_ IDI_ IDB_|Bitmap dell'icona del cursore della finestra di dialogo del tasto di scelta rapida o menu (risorse associate o personalizzate)|
|Voci di menu|ID_|Voce di menu|
|Comandi:|ID_|Comando|
|Controlli e finestra figlio|IDC_|Control|
|Stringhe|IDS_|Stringa nella tabella di stringhe|
|MFC|AFX_|Riservati per simboli MFC predefiniti|

## <a name="to-change-a-symbol-value-assigned-to-a-single-resource-or-object"></a>Per modificare il valore di un simbolo assegnato a una singola risorsa o oggetto

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), selezionare la risorsa.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Nel **delle proprietà** finestra digitare il nome del simbolo seguito da un segno di uguale e un numero intero nel **ID** casella, ad esempio:

    ```
    IDC_EDITNAME=5100
    ```

Il nuovo valore viene archiviato nel file di intestazione simboli la volta successiva che si salva il progetto. Solo il nome del simbolo rimane visibile nella casella ID; il segno di uguale e il valore non vengono visualizzati dopo essere stati convalidati.

### <a name="symbol-value-restrictions"></a>Restrizioni relative ai valori di simboli

Il valore di un simbolo può essere qualsiasi numero intero espresso in modo normale per le direttive #define per il preprocessore. Di seguito sono riportati alcuni esempi di valori di simboli:

```
18
4001
0x0012
-3456
```

I valori dei simboli per le risorse (tasti di scelta rapida, bitmap, cursori, finestre di dialogo, icone, menu, tabelle di stringhe e informazioni sulla versione) devono essere numeri decimali compresi tra 0 e 32.767, ma non possono essere valori esadecimali. I valori dei simboli per gli elementi delle risorse, quali i controlli delle finestre di dialogo o le singole stringhe nella tabella di stringhe, possono essere compresi tra 0 e 65.534 oppure tra -32.768 e 32.767.

I simboli delle risorse sono numeri a 16 bit. È possibile immetterli come valori con o senza segno, ma vengono usati internamente come Unsigned Integer. Per i numeri negativi viene pertanto eseguito il cast ai corrispondenti valori positivi.

Di seguito sono riportate alcune restrizioni relative ai valori dei simboli:

- L'ambiente di sviluppo Visual Studio e MFC usano alcuni intervalli di numeri per scopi specifici. Tutti i numeri con il bit più significativo impostato (da -32.768 a -1 oppure da 32.768 a 65.534, a seconda del segno) sono riservati da MFC.

- Non è possibile definire il valore di un simbolo mediante altre stringhe di simbolo. Non è ad esempio supportata la seguente definizione di simbolo:

    ```cpp
    #define IDC_MYEDIT  IDC_OTHEREDIT  //not supported
    ```

- Non è possibile usare macro del preprocessore con argomenti come definizioni dei valori. Ad esempio:

    ```cpp
    #define   IDD_ABOUT  ID(7) //not supported
    ```

   non è un'espressione valida indipendentemente dal valore valutato da `ID` in fase di compilazione.

- L'applicazione potrebbe disporre di un file esistente contenente simboli definiti con espressioni. Per altre informazioni su come includere i simboli come simboli di sola lettura, vedere [simboli usando condivisi (di sola lettura) o calcolati](../windows/including-shared-read-only-or-calculated-symbols.md).

Per altre informazioni sugli intervalli di numeri, vedere [TN023: Risorse MFC standard](../mfc/tn023-standard-mfc-resources.md).

## <a name="to-change-the-name-of-the-resource-symbol-header-file"></a>Per modificare il nome del file di intestazione simboli di risorsa

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic sul file RC e scegliere [Inclusioni risorsa](../windows/resource-includes-dialog-box.md) dal menu di scelta rapida.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Nel **file di intestazione simboli** , digitare il nuovo nome per il file di inclusione.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[ID simbolo predefiniti](../windows/predefined-symbol-ids.md)<br/>
[Visualizzazione di simboli risorsa](../windows/viewing-resource-symbols.md)<br/>
