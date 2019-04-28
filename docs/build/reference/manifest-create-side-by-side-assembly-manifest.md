---
title: /MANIFEST (Crea manifesto dell'assembly syde-by-side)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.GenerateManifest
helpviewer_keywords:
- -MANIFEST linker option
- /MANIFEST linker option
- MANIFEST linker option
ms.assetid: 98c52e1e-712c-4f49-b149-4d0a3501b600
ms.openlocfilehash: 9a3ca3980a9cdff4e67885b2ad47ffa2385b0774
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62321644"
---
# <a name="manifest-create-side-by-side-assembly-manifest"></a>/MANIFEST (Crea manifesto dell'assembly syde-by-side)

```
/MANIFEST[:{EMBED[,ID=#]|NO}]
```

## <a name="remarks"></a>Note

/MANIFEST specifica che il linker deve creare un file manifesto side-by-side. Per altre informazioni sui file manifesto, vedere [Manifest Files Reference](/windows/desktop/SbsCs/manifest-files-reference).

Il valore predefinito è /MANIFEST.

L'opzione /MANIFEST:EMBED specifica che il linker deve includere il file manifesto nell'immagine come risorsa di tipo RT_MANIFEST. Il parametro facoltativo `ID` è l'ID della risorsa da utilizzare per il manifesto. Utilizzare un valore 1 per un file eseguibile. Utilizzare un valore 2 per una dll per permettergli di specificare le dipendenze private. Se il parametro `ID` non viene specificato, il valore predefinito è 2 se l'opzione /DLL è impostata; altrimenti il valore predefinito è 1.

A partire da Visual Studio 2008, i file manifesto per gli eseguibili contengono una sezione che specifica le informazioni di controllo Account utente (UAC). Se si specifica /MANIFEST ma non si specifica né [/MANIFESTUAC](manifestuac-embeds-uac-information-in-manifest.md) né [/DLL](dll-build-a-dll.md), un frammento di controllo dell'account utente predefinito con il set a livello di controllo dell'account utente da *asInvoker* viene inserito nel manifesto. Per altre informazioni sui livelli di controllo dell'account utente, vedere [/MANIFESTUAC (incorpora UAC information nel manifesto)](manifestuac-embeds-uac-information-in-manifest.md).

Per modificare il comportamento predefinito del controllo dell'account utente, effettuare una delle operazioni seguenti:

- Specificare l'opzione /MANIFESTUAC e impostare il livello del controllo dell'account utente sul valore desiderato.

- In alternativa, l'opzione /MANIFESTUAC:NO se non si desidera generare un frammento del controllo dell'account utente nel manifesto.

Se non si specifica /MANIFEST ma si specifica [/MANIFESTDEPENDENCY](manifestdependency-specify-manifest-dependencies.md) commenti, viene creato un file manifesto. Un file manifesto non viene creato se si specifica /MANIFEST:NO.

Se si specifica /MANIFEST, il nome del file manifesto è lo stesso del nome del file di output con aggiunta l'estensione manifest. Ad esempio, se il nome del file di output è MyFile.exe, il nome del file manifesto è MyFile.exe.manifest.  Se si specifica /MANIFESTFILE:*name*, il nome del manifesto è quello specificato in *nome*.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **Linker** nodo.

1. Selezionare il **Manifest File** pagina delle proprietà.

1. Modificare il **Genera manifesto** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateManifest%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
