---
title: 'Procedura: Gestione dei simboli'
ms.date: 02/14/2019
f1_keywords:
- vc.editors.symbol.changing
- vc.editors.symbol.restrictions.name
- vc.editors.symbol.changing.value
- vc.editors.symbol.restrictions.value
- vc.editors.symbol.changing.header
- vc.editors.symbol.changing.unassigned
- vc.editors.symbol.shared.calculated
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
- symbols [C++], unassigned
- Change Symbol dialog box [C++]
- unassigned symbols
- symbols [C++], deleting
- symbols [C++], read-only
- symbols [C++], shared
- symbols [C++], calculated
- read-only symbols
- symbol directives
- calculated symbols
- shared symbols
ms.assetid: 26541832-8dba-4177-b642-e08f94502ea7
ms.openlocfilehash: 4f1c44e8fc2ae34ddcb65ec23ca8d98e11d50ec0
ms.sourcegitcommit: 470de1337035dd33682d935b4b6c6d8b1bdb0bbb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/15/2019
ms.locfileid: "56320588"
---
# <a name="how-to-manage-symbols"></a>Procedura: Gestione dei simboli

Quando si crea una nuova risorsa o un oggetto risorsa, l'ambiente di sviluppo gli assegna un nome di simbolo predefinito, ad esempio IDD_DIALOG1. È possibile usare la [finestra proprietà](/visualstudio/ide/reference/properties-window) per modificare il nome del simbolo predefinito o per modificare il nome di qualsiasi simbolo già associato a una risorsa.

Per simboli associati a una sola risorsa, è anche possibile usare la **proprietà** finestra per modificare il valore di simbolo. È possibile usare la [finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md) per modificare il valore dei simboli non attualmente assegnati a una risorsa.

In genere tutti i simboli le definizioni vengono salvate in `Resource.h`. Tuttavia, potrebbe essere necessario modificare il nome file di inclusione in modo da poter, ad esempio, usare più file di risorse nella stessa directory.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere [creando un nuovo File di Script di risorsa](../windows/how-to-create-a-resource-script-file.md).

## <a name="symbol-name-restrictions"></a>Restrizioni relative ai nomi dei simboli

I nomi dei simboli sono soggetti alle restrizioni riportate di seguito.

- Tutti i [simboli](../windows/symbols-resource-identifiers.md) deve essere univoco all'interno dell'ambito dell'applicazione. In questo modo si evitano conflitti tra le definizioni dei simboli nei file di intestazione.

- I caratteri validi per il nome di un simbolo includono i caratteri maiuscoli e minuscoli dalla A alla Z, i numeri da 0 a 9 e i caratteri di sottolineatura ( _ ).

- I nomi dei simboli non può iniziare con un numero e sono limitati a 247 caratteri.

- I nomi dei simboli non può contenere spazi.

- I nomi dei simboli non sono tra maiuscole e minuscole, ma viene mantenuto il caso della prima definizione del simbolo. Il file di intestazione che definisce i simboli viene usato sia dal compilatore e dall'editor di risorse sia da uno o più programmi C++ per fare riferimento alle risorse definite in un file di risorse. Se due nomi di simbolo differiscono solo nell'utilizzo di lettere maiuscole e minuscole, nel programma C++ verranno visualizzati due simboli separati, mentre nel compilatore e nell'editor di risorse verranno visualizzati entrambi i nomi come se facessero riferimento a un unico simbolo.

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

### <a name="to-change-a-symbol-name-id"></a>Per modificare il nome di un simbolo (ID)

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), selezionare la risorsa.

1. Nel **delle proprietà** finestra, digitare un nuovo nome di simbolo o selezionare dall'elenco dei simboli esistenti nella **ID** casella.

   Se si digita un nuovo nome del simbolo, che ha assegnato automaticamente un valore.

È possibile usare la [finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md) per modificare i nomi dei simboli non attualmente assegnati a una risorsa.

## <a name="symbol-value-restrictions"></a>Restrizioni relative ai valori dei simboli

Il valore di un simbolo può essere qualsiasi numero intero espresso in modo normale per le direttive #define per il preprocessore. Di seguito sono riportati alcuni esempi di valori di simboli:

```
18
4001
0x0012
-3456
```

I valori dei simboli per le risorse (tasti di scelta rapida, bitmap, cursori, finestre di dialogo, icone, menu, tabelle di stringhe e informazioni sulla versione) devono essere numeri decimali compresi tra 0 e 32.767, ma non possono essere valori esadecimali. I valori dei simboli per gli elementi delle risorse, quali i controlli delle finestre di dialogo o le singole stringhe nella tabella di stringhe, possono essere compresi tra 0 e 65.534 oppure tra -32.768 e 32.767.

Simboli risorsa sono numeri a 16 bit. È possibile immetterli come con o senza segno, tuttavia, sono abituati internamente come unsigned integer. Per i numeri negativi viene pertanto eseguito il cast ai corrispondenti valori positivi.

Di seguito sono riportate alcune restrizioni relative ai valori dei simboli:

- L'ambiente di sviluppo Visual Studio e MFC usano alcuni intervalli di numeri per scopi specifici. Tutti i numeri con il bit più significativo impostato (da -32.768 a -1 oppure da 32.768 a 65.534, a seconda del segno) sono riservati da MFC.

- È possibile definire il valore di un simbolo mediante altre stringhe di simbolo. Ad esempio, non è supportata la seguente definizione di simbolo:

    ```cpp
    #define IDC_MYEDIT  IDC_OTHEREDIT  //not supported
    ```

- È possibile usare le macro del preprocessore con argomenti come definizioni dei valori. Ad esempio:

    ```cpp
    #define   IDD_ABOUT  ID(7) //not supported
    ```

   non è un'espressione valida indipendentemente `ID` restituisce in fase di compilazione.

- L'applicazione potrebbe disporre di un file esistente contenente simboli definiti con espressioni. Per altre informazioni su come includere i simboli come simboli di sola lettura, vedere [simboli usando condivisi (di sola lettura) o calcolati](../windows/including-shared-read-only-or-calculated-symbols.md).

Per altre informazioni sugli intervalli di numeri, vedere [TN023: Risorse MFC standard](../mfc/tn023-standard-mfc-resources.md).

### <a name="to-change-a-symbol-value"></a>Per modificare un valore di simbolo

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), selezionare la risorsa.

1. Nel **delle proprietà** finestra digitare il nome del simbolo seguito da un segno di uguale e un numero intero nel **ID** casella, ad esempio:

    ```
    IDC_EDITNAME=5100
    ```

Il nuovo valore viene archiviato nel file di intestazione simboli la volta successiva che si salva il progetto. Solo il nome del simbolo rimane visibile nella casella ID; il segno di uguale e il valore non vengono visualizzate dopo che è convalidati.

## <a name="change-or-delete-symbols"></a>Modifica o Elimina i simboli

Durante la [nella finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md), è possibile modificare o eliminare i simboli esistenti che non sono già assegnati a una risorsa o oggetto.

### <a name="to-change-an-unassigned-symbol"></a>Per modificare un simbolo non assegnato

1. Nel **Name** casella, selezionare il simbolo non assegnato e scegliere **modifica**.

1. Modifica nome del simbolo o il valore nelle caselle disponibili nel **Cambia simbolo** nella finestra di dialogo.

   > [!NOTE]
   > Per modificare un simbolo che *viene* assegnato a una risorsa o oggetto, è necessario usare l'editor di risorse o **proprietà** finestra.

### <a name="to-delete-an-unassigned-unused-symbol"></a>Per eliminare un simbolo non assegnato (non usato)

Nel [finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md), selezionare il simbolo che si desidera eliminare e scegliere **eliminare**.

   > [!NOTE]
   > Prima di eliminare un simbolo non usato in un file di risorse, verificare che non venga usato in un punto del programma o da file di risorse inclusi in fase di compilazione.

## <a name="include-symbols"></a>Includi simboli

La prima volta che l'ambiente di sviluppo legge un file di risorse creato da un'altra applicazione, contrassegna tutto, inclusi i file di intestazione, come di sola lettura. Se è possibile usare la [finestra di dialogo Inclusioni risorsa](../windows/resource-includes-dialog-box.md) per aggiungere i file di intestazione simboli di sola lettura aggiuntivi.

Un motivo per cui è possibile voler usare le definizioni dei simboli di sola lettura è per i file di simboli che si intende condividere tra più progetti.

Inoltre, è possibile usare file di simboli inclusi quando si dispone di risorse esistenti con le definizioni dei simboli che usano espressioni anziché semplici numeri interi per definire il valore di simbolo. Ad esempio:

```cpp
#define   IDC_CONTROL1 2100
#define   IDC_CONTROL2 (IDC_CONTROL1+1)
```

L'ambiente interpreterà correttamente questi simboli calcolati purché:

- I simboli calcolati siano inseriti in un file di simboli di sola lettura.

- Il file di risorse contenga risorse a cui sono già stati assegnati questi simboli calcolati.

- È prevista un'espressione numerica.

> [!NOTE]
> Se è prevista una stringa o un'espressione numerica, l'espressione non è valutata.

### <a name="to-include-shared-read-only-symbols-in-your-resource-file"></a>Per includere simboli condivisi (di sola lettura) nel file di risorse

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic sul file RC e scegliere [Inclusioni risorsa](../windows/resource-includes-dialog-box.md) dal menu di scelta rapida.

1. Nel **direttive per simboli di sola lettura** casella, utilizzare il `#include` direttiva del compilatore per specificare il file in cui si desidera i simboli di sola lettura da conservare.

   Non chiamare il file `Resource.h`, dal momento che è il nome del file in genere usato dal file di intestazione simboli principale.

   > [!NOTE]
   > **Importante** il testo digitato nella casella di direttive per simboli di sola lettura è inclusa nel file di risorse esattamente durante la digitazione. Verificare che il tipo non contenga errori di ortografia o di sintassi.

   Usare la **direttive per simboli di sola lettura** casella per includere i file con solo le definizioni dei simboli. Non includere definizioni di risorse. in caso contrario, verranno create le definizioni di risorse duplicate quando viene salvato il file.

1. Inserire i simboli nel file specificato.

   I simboli nei file inclusi in questo modo vengono valutati ogni volta che si apre il file di risorse, ma questi non vengono sostituiti sul disco quando si salva il file.

1. Scegliere **OK**.

### <a name="to-change-the-name-of-the-resource-symbol-header-file"></a>Per modificare il nome del file di intestazione simboli di risorsa

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic sul file RC e scegliere [Inclusioni risorsa](../windows/resource-includes-dialog-box.md) dal menu di scelta rapida.

1. Nel **file di intestazione simboli** , digitare il nuovo nome per il file di inclusione.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Identificatori di risorsa (simboli)](../windows/symbols-resource-identifiers.md)<br/>
[Creare i simboli](../windows/creating-new-symbols.md)<br/>
[ID simbolo predefiniti](../windows/predefined-symbol-ids.md)<br/>