---
title: Riferimento a XDCMake
ms.date: 11/04/2016
f1_keywords:
- xdcmake
helpviewer_keywords:
- xdcmake program
ms.assetid: 14e65747-d000-4343-854b-8393bf01cbac
ms.openlocfilehash: adbb06b5100850aac0cfd191a530d5c98b380738
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57740442"
---
# <a name="xdcmake-reference"></a>Riferimento a XDCMake

xdcmake.exe è un programma che compila i file .xdc in un file .xml. Viene creato un file .xdc dal compilatore Visual C++ per ogni file di codice sorgente quando il codice sorgente viene compilato con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) e quando il file del codice sorgente contiene commenti della documentazione contrassegnati con tag XML.

### <a name="to-use-xdcmakeexe-in-the-visual-studio-development-environment"></a>Per usare xdcmake.exe nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../ide/working-with-project-properties.md).

1. Aprire la cartella **Proprietà di configurazione**.

1. Fare clic sulla pagina delle proprietà **Commenti al documento XML**.

> [!NOTE]
>  Le opzioni di xdcmake.exe nella riga di comando sono diverse rispetto alle opzioni di quando xdcmake.exe è usato nell'ambiente di sviluppo (pagine delle proprietà). Per informazioni sull'uso di xdcmake.exe nell'ambiente di sviluppo, vedere [Pagine delle proprietà dello strumento generatore di documenti XML](../ide/xml-document-generator-tool-property-pages.md).

## <a name="syntax"></a>Sintassi

xdcmake `input_filename options`

## <a name="parameters"></a>Parametri

*input_filename*<br/>
Nome di file dei file .xdc usati come input per xdcmake.exe. Specificare uno o più file .xdc o impiegare *.xdc per usare tutti i file .xdc nella directory corrente.

*options*<br/>
Zero o più delle opzioni seguenti:

|Opzione|Description|
|------------|-----------------|
|/?, /help|Visualizza la guida di xdcmake.exe.|
|/assembly:*filename*|Consente di specificare il valore di \<assembly > tag nel file .xml.  Per impostazione predefinita, il valore di \<assembly> tag corrisponde al nome del file .xml.|
|/nologo|Non visualizza le informazioni sul copyright.|
|/out:*filename*|Consente di specificare il nome del file .xml.  Per impostazione predefinita, il nome del file .xml è il nome del file del primo file .xdc elaborato da xdcmake.exe.|

## <a name="remarks"></a>Osservazioni

Visual Studio richiama automaticamente xdcmake.exe quando si compila un progetto. xdcmake.exe può essere richiamato anche dalla riga di comando.

Per altre informazioni sull'aggiunta di commenti sulla documentazione nei file del codice sorgente, vedere [Tag consigliati per i commenti relativi alla documentazione](../ide/recommended-tags-for-documentation-comments-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Documentazione di XML](../ide/xml-documentation-visual-cpp.md)
