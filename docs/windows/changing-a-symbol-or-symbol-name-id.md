---
description: 'Altre informazioni su: procedura: gestire i simboli'
title: 'Procedura: gestire i simboli'
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
ms.openlocfilehash: 2a7bdc6994bfcdadc9b7d1d5b98350fcd47ad6fe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118225"
---
# <a name="how-to-manage-symbols"></a>Procedura: gestire i simboli

Quando si crea una nuova risorsa o un nuovo oggetto risorsa, l'ambiente di sviluppo lo assegna un nome di simbolo predefinito, ad esempio `IDD_DIALOG1` . È possibile utilizzare il [finestra Proprietà](/visualstudio/ide/reference/properties-window) per modificare il nome del simbolo predefinito o per modificare il nome di un simbolo già associato a una risorsa.

Per i simboli associati a una singola risorsa, è anche possibile usare la finestra **Proprietà** per modificare il valore del simbolo. È possibile usare la finestra di [dialogo Simboli risorsa](./creating-new-symbols.md) per modificare il valore dei simboli non attualmente assegnati a una risorsa.

In genere tutte le definizioni dei simboli vengono salvate in `Resource.h` . Tuttavia, potrebbe essere necessario modificare il nome file di inclusione in modo da poter, ad esempio, usare più file di risorse nella stessa directory.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere [procedura: creare risorse](how-to-create-a-resource-script-file.md).

## <a name="symbol-name-restrictions"></a>Restrizioni relative ai nomi dei simboli

I nomi dei simboli sono soggetti alle restrizioni riportate di seguito.

- Tutti i [simboli](symbols-resource-identifiers.md) devono essere univoci all'interno dell'ambito dell'applicazione per evitare conflitti nelle definizioni dei simboli nei file di intestazione.

- I caratteri validi per il nome di un simbolo includono i caratteri maiuscoli e minuscoli dalla A alla Z, i numeri da 0 a 9 e i caratteri di sottolineatura ( _ ).

- I nomi dei simboli non possono iniziare con un numero e sono limitati a 247 caratteri.

- I nomi dei simboli non possono contenere spazi.

- I nomi dei simboli non fanno distinzione tra maiuscole e minuscole, ma viene mantenuto il caso della prima definizione del simbolo.

   Il file di intestazione che definisce i simboli viene usato sia dal compilatore e dall'editor di risorse sia da uno o più programmi C++ per fare riferimento alle risorse definite in un file di risorse. Se due nomi di simbolo differiscono solo nell'utilizzo di lettere maiuscole e minuscole, nel programma C++ verranno visualizzati due simboli separati, mentre nel compilatore e nell'editor di risorse verranno visualizzati entrambi i nomi come se facessero riferimento a un unico simbolo.

> [!NOTE]
> Se non si segue lo schema del nome di simbolo standard (ID * _ [parola chiave]) descritto di seguito e il nome del simbolo è identico a quello di una parola chiave nota al compilatore di script di risorsa, il tentativo di compilare il file di script di risorsa comporterà la generazione di errori apparentemente casuale difficili da diagnosticare. Per evitare questo problema, è necessario attenersi allo schema di denominazione standard.

I nomi dei simboli dispongono di prefissi descrittivi che indicano il tipo di risorsa o di oggetto che rappresentano. Tali prefissi descrittivi iniziano con l'ID di combinazione testo. La libreria MFC (Microsoft Foundation Class) utilizza le convenzioni di denominazione dei simboli illustrate nella tabella seguente:

|Category|Prefisso|Usa|
|--------------|------------|---------|
|Risorse|IDR_, IDD_, IDC_, IDI_, IDB_|Acceleratore o menu (e risorse associate o personalizzate), finestra di dialogo, cursore, icona, bitmap|
|Voci di menu|ID_|Voce di menu|
|Comandi|ID_|Comando|
|Controlli e finestra figlio|IDC_|Controllo|
|Stringhe|IDS_|Stringa nella tabella di stringhe|
|MFC|AFX_|Riservati per simboli MFC predefiniti|

### <a name="to-change-a-symbol-name-id"></a>Per modificare il nome di un simbolo (ID)

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)selezionare la risorsa.

1. Nella finestra **Proprietà** Digitare un nuovo nome di simbolo o selezionarlo nell'elenco dei simboli esistenti nella casella **ID** .

   Se si digita un nuovo nome di simbolo, viene automaticamente assegnato un valore.

> [!NOTE]
> È possibile usare la finestra di [dialogo Simboli risorsa](./creating-new-symbols.md) per modificare i nomi dei simboli non attualmente assegnati a una risorsa.

## <a name="symbol-value-restrictions"></a>Restrizioni relative ai valori dei simboli

Un valore di simbolo può essere qualsiasi numero intero espresso in modo normale per le `#define` direttive del preprocessore. Di seguito sono riportati alcuni esempi di valori di simboli:

```
18
4001
0x0012
-3456
```

I valori dei simboli per risorse quali acceleratori, bitmap, cursori, finestre di dialogo, icone, menu, tabelle di stringhe e informazioni sulla versione devono essere numeri decimali compresi tra 0 e 32.767, ma non possono essere esadecimali. I valori dei simboli per gli elementi delle risorse, quali i controlli delle finestre di dialogo o le singole stringhe nella tabella di stringhe, possono essere compresi tra 0 e 65.534 oppure tra -32.768 e 32.767. Per altre informazioni sugli intervalli di numeri, vedere [TN023: risorse MFC standard](../mfc/tn023-standard-mfc-resources.md).

I simboli delle risorse sono numeri a 16 bit. È possibile immetterli come con segno o senza segno, ma vengono usati internamente come interi senza segno, quindi viene eseguito il cast dei numeri negativi al valore positivo corrispondente.

Alcune limitazioni dei valori dei simboli sono:

- L'ambiente di sviluppo Visual Studio e MFC usano alcuni intervalli di numeri per scopi specifici. Tutti i numeri con il bit più significativo impostato (da -32.768 a -1 oppure da 32.768 a 65.534, a seconda del segno) sono riservati da MFC.

- Non è possibile definire un valore di simbolo utilizzando altre stringhe di simboli. Ad esempio, la definizione di simbolo seguente non è supportata:

    ```cpp
    #define IDC_MYEDIT  IDC_OTHEREDIT  //not supported
    ```

- Non è possibile usare le macro del preprocessore con argomenti come definizioni di valore. L'esempio seguente non è un'espressione valida indipendentemente da ciò che `ID` restituisce in fase di compilazione:

    ```cpp
    #define   IDD_ABOUT  ID(7) //not supported
    ```

- L'applicazione potrebbe disporre di un file esistente contenente simboli definiti con espressioni.

### <a name="to-change-a-symbol-value"></a>Per modificare il valore di un simbolo

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)selezionare la risorsa.

1. Nella finestra **Proprietà** Digitare il nome del simbolo seguito da un segno di uguale e un numero intero nella casella **ID** , ad esempio:

    ```
    IDC_EDITNAME=5100
    ```

   Il nuovo valore viene archiviato nel file di intestazione simboli la volta successiva che si salva il progetto. Solo il nome del simbolo rimane visibile nella casella ID e il segno di uguale e il valore non vengono visualizzati dopo essere stati convalidati.

## <a name="change-or-delete-symbols"></a>Modificare o eliminare simboli

Nella finestra di [dialogo Simboli risorsa](./creating-new-symbols.md)è possibile modificare o eliminare i simboli esistenti che non sono già stati assegnati a una risorsa o a un oggetto.

### <a name="to-change-an-unassigned-symbol"></a>Per modificare un simbolo non assegnato

1. Nella casella **nome** selezionare il simbolo non assegnato e scegliere **Cambia**.

1. Modificare il nome o il valore del simbolo nelle caselle fornite nella finestra di dialogo **Cambia simbolo** .

> [!NOTE]
> Per modificare un simbolo assegnato a una risorsa o a un oggetto, è necessario usare l'editor risorse o la finestra **Proprietà** .

### <a name="to-delete-an-unassigned-unused-symbol"></a>Per eliminare un simbolo non assegnato (non usato)

Nella finestra di dialogo **simboli risorsa** selezionare il simbolo che si desidera eliminare e scegliere **Elimina**.

> [!NOTE]
> Prima di eliminare un simbolo non usato in un file di risorse, assicurarsi che non venga usato altrove nel programma o in base ai file di risorse inclusi in fase di compilazione.

## <a name="include-symbols"></a>Includi simboli

La prima volta che l'ambiente di sviluppo legge un file di risorse creato da un'altra applicazione, contrassegna tutto, inclusi i file di intestazione, come di sola lettura. Sebbene sia possibile utilizzare la finestra di [dialogo Inclusioni risorsa](./how-to-include-resources-at-compile-time.md) per aggiungere ulteriori file di intestazione dei simboli di sola lettura.

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

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)fare clic con il pulsante destro del mouse sul file *RC* e scegliere [Includi risorse](./how-to-include-resources-at-compile-time.md).

1. Nella casella **direttive per simboli di sola lettura** utilizzare la `#include` direttiva del compilatore per specificare il file in cui si desidera mantenere i simboli di sola lettura.

   Non chiamare il file `Resource.h` , perché questo è il nome file normalmente usato dal file di intestazione del simbolo principale.

   > [!NOTE]
   > Gli elementi digitati nella casella **direttive per simboli di sola lettura** sono inclusi nel file di risorse esattamente durante la digitazione. Verificare che il tipo non contenga errori di ortografia o di sintassi.

   Utilizzare la casella **direttive per simboli di sola lettura** per includere solo i file con definizioni di simboli. Non includere definizioni di risorse. in caso contrario, verranno create definizioni di risorse duplicate quando il file viene salvato.

1. Inserire i simboli nel file specificato.

   I simboli nei file inclusi in questo modo vengono valutati ogni volta che si apre il file di risorse, ma non vengono sostituiti sul disco quando si salva il file.

1. Selezionare **OK**.

### <a name="to-change-the-name-of-the-resource-symbol-header-file"></a>Per modificare il nome del file di intestazione simboli di risorsa

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)fare clic con il pulsante destro del mouse sul file *RC* e scegliere [Includi risorse](./how-to-include-resources-at-compile-time.md).

1. Nella casella **file di intestazione simboli** Digitare il nuovo nome per il file di inclusione.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedi anche

[Identificatori di risorsa (simboli)](symbols-resource-identifiers.md)<br/>
[Procedura: creare simboli](creating-new-symbols.md)<br/>
[ID simbolo predefiniti](predefined-symbol-ids.md)<br/>
