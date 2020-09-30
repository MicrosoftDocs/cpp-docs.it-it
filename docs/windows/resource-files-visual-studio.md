---
title: File di risorse (C++)
ms.date: 02/14/2019
f1_keywords:
- vc.editors.resource
helpviewer_keywords:
- resources [C++]
- .rc files [C++]
- resource files [C++]
- resource script files [C++]
- resource script files [C++], Win-32 based applications
- resource script files [C++], files updated when editing resources
- resources [C++], types of resource files
- rct files [C++]
- rc files [C++]
- resource files [C++], types of
- .rct files [C++]
- resource script files [C++], unsupported types
- manifest resources [C++]
- resources [C++], manifest
- resources [C++], opening
- file types [C++], for resources
- resources [C++], editing
- files [C++], editable types
- resource editing
ms.assetid: 4d2b6fcc-07cf-4289-be87-83a60f69533c
ms.openlocfilehash: 463c27959b049436e29f872c966bc276c6ef5f2d
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91507015"
---
# <a name="resource-files-c"></a>File di risorse (C++)

> [!NOTE]
> Dal momento che i progetti gestiti non usano i file di script della risorsa, è necessario aprire le risorse da **Esplora soluzioni**. Utilizzare l' [editor di immagini](../windows/image-editor-for-icons.md) e l' [editor binario](binary-editor.md) per utilizzare i file di risorse nei progetti gestiti.
>
> Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

Il termine *file di risorse* può fare riferimento a un numero di tipi di file, ad esempio:

- File script di risorse (con estensione rc) di un programma.

- File modello di risorse (con estensione rct)

- Una singola risorsa esistente come file autonomo. Questo tipo include una bitmap, un'icona o un file di cursore a cui fa riferimento un file RC.

- Un file di intestazione generato dall'ambiente di sviluppo. Questo tipo include `Resource.h` , a cui fa riferimento un file RC.

Le risorse disponibili in altri tipi di file, ad esempio i file con estensione exe, dll e res, sono definite *risorse*.

È possibile usare *i file di risorse* e *le risorse* all'interno del progetto. È anche possibile usare quelli che non fanno parte del progetto corrente o che sono stati creati all'esterno dell'ambiente di sviluppo di Visual Studio. Ad esempio, è possibile:

- Usare file di risorse annidati e inclusi in modo condizionale.

- Aggiornare le risorse esistenti o convertirle in Visual C++.

- Importare o esportare risorse grafiche nel o dal file di risorse corrente.

- Includere identificatori (simboli) condivisi o di sola lettura che non è possibile modificare tramite l'ambiente di sviluppo.

- Includere le risorse nel file eseguibile (con estensione exe) che non necessitano di modifica (o non devono essere modificate), ad esempio le risorse condivise tra diversi progetti.

- Includere tipi di risorse non supportati dall'ambiente di sviluppo.

Per ulteriori informazioni sulle risorse, vedere come [creare risorse](../windows/how-to-create-a-resource-script-file.md), [gestire risorse](../windows/how-to-copy-resources.md)e [includere risorse in](../windows/how-to-include-resources-at-compile-time.md)fase di compilazione.

## <a name="editable-resources"></a>Risorse modificabili

Per modificare le risorse contenute, è possibile aprire i seguenti tipi di file:

| Nome file | Descrizione |
|---|---|
| .rc | File script di risorsa |
| .rct | File modello di risorsa |
| RES | File di risorse |
| resx | File di risorse gestite |
| EXE | File eseguibili |
| DLL | File di libreria a collegamento dinamico |
| BMP, ICO, DIB, cur | Bitmap, icona, barra degli strumenti e file di cursore |

Quando si modificano le risorse, l'ambiente di Visual Studio funziona con e influiscono sui file seguenti:

| Nome file | Descrizione |
|---|---|
| Resource.h | File di intestazione generato dall'ambiente di sviluppo che contiene le definizioni dei simboli.<br/><br/>Includere il file nel controllo del codice sorgente. |
| Nomefile.aps | Versione binaria del file di script di risorsa corrente usato per il caricamento rapido.<br /><br /> Gli editor di risorse non leggono direttamente i file RC o Resource. h. Il compilatore di risorse li compila in file con estensione APS utilizzati dagli editor di risorse. Questo file è presente in una fase di compilazione e archivia solo dati simbolici.<br/><br/>Come nel caso di un normale processo di compilazione, le informazioni che non sono simbolici, ad esempio i commenti, vengono ignorate durante il processo di compilazione.<br/><br/>Ogni volta che il file. APS non è sincronizzato con il file RC, il file RC viene rigenerato. Ad esempio, quando si **Salva**, l'editor risorse sovrascrive il file RC e il file Resource. h. Tutte le modifiche apportate alle risorse rimangono incorporate nel file RC, ma i commenti andranno sempre perduti dopo la sovrascrittura del file RC. Per informazioni su come mantenere i commenti, vedere [includere le risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).<br/><br/>In genere, non è necessario includere il file con estensione APS nel controllo del codice sorgente. |
| .rc | File di script di risorsa che contiene lo script per le risorse nel progetto corrente. Questo file viene sovrascritto dal file APS ogni volta che si salva.<br/><br/>Includere il file nel controllo del codice sorgente. |

## <a name="manifest-resources"></a>Risorse di manifesto

Nei progetti desktop C++, le risorse di manifesto sono file XML che descrivono le dipendenze utilizzate da un'applicazione. In Visual Studio, ad esempio, il file manifesto generato dalla procedura guidata MFC definisce la versione delle DLL dei controlli comuni di Windows che l'applicazione deve usare:

```xml
<description>Your app description here</description>
<dependency>
    <dependentAssembly>
        <assemblyIdentity
            type="win32"
            name="Microsoft.Windows.Common-Controls"
            version="6.0.0.0"
            processorArchitecture="X86"
            publicKeyToken="6595b64144ccf1df"
            language="*"
        />
    </dependentAssembly>
</dependency>
```

Per un'applicazione Windows XP o Windows Vista, la risorsa del manifesto deve specificare la versione più recente dei controlli comuni di Windows per l'applicazione da utilizzare. Nell'esempio precedente viene usata `6.0.0.0` la versione, che supporta il [controllo Syslink](/windows/win32/Controls/syslink-overview).

> [!NOTE]
> È possibile avere solo una risorsa di manifesto per modulo.

Per visualizzare le informazioni sulla versione e sul tipo contenute in una risorsa di manifesto, aprire il file in un visualizzatore XML o nell'editor di testo di Visual Studio. Se si apre una risorsa di manifesto da [Visualizzazione risorse](./how-to-create-a-resource-script-file.md), la risorsa verrà aperta in formato binario.

### <a name="to-open-a-manifest-resource"></a>Per aprire una risorsa di manifesto

1. Aprire il progetto in Visual Studio e passare a **Esplora soluzioni**.

1. Espandere la cartella **file di risorse** , quindi:

   - Per aprirlo nell'editor di testo, fare doppio clic sul file *. manifest* .

   - Per aprire un altro editor, fare clic con il pulsante destro del mouse sul file *. manifest* e scegliere **Apri con**. Specificare l'editor da usare e selezionare **Apri**.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Uso di file di risorse](../windows/working-with-resource-files.md)<br/>
[Identificatori di risorsa (simboli)](../windows/symbols-resource-identifiers.md)<br/>
[Editor di risorse](../windows/resource-editors.md)<br/>
