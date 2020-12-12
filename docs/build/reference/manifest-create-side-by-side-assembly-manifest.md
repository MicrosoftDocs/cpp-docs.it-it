---
description: Altre informazioni su:/MANIFEST (Crea manifesto dell'assembly affiancato)
title: /MANIFEST (Crea manifesto dell'assembly syde-by-side)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.GenerateManifest
helpviewer_keywords:
- -MANIFEST linker option
- /MANIFEST linker option
- MANIFEST linker option
ms.assetid: 98c52e1e-712c-4f49-b149-4d0a3501b600
ms.openlocfilehash: 6ab5dd0c0ae04a6ac5377c1c9ee0015f8c64ad54
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190705"
---
# <a name="manifest-create-side-by-side-assembly-manifest"></a>/MANIFEST (Crea manifesto dell'assembly syde-by-side)

```
/MANIFEST[:{EMBED[,ID=#]|NO}]
```

## <a name="remarks"></a>Commenti

/MANIFEST specifica che il linker deve creare un file manifesto side-by-side. Per ulteriori informazioni sui file manifesto, vedere [riferimenti ai file manifesto](/windows/win32/SbsCs/manifest-files-reference).

Il valore predefinito è/MANIFEST.

L'opzione /MANIFEST:EMBED specifica che il linker deve includere il file manifesto nell'immagine come risorsa di tipo RT_MANIFEST. Il parametro facoltativo `ID` è l'ID della risorsa da utilizzare per il manifesto. Utilizzare un valore 1 per un file eseguibile. Utilizzare un valore 2 per una dll per permettergli di specificare le dipendenze private. Se il parametro `ID` non viene specificato, il valore predefinito è 2 se l'opzione /DLL è impostata; altrimenti il valore predefinito è 1.

A partire da Visual Studio 2008, i file manifesto per gli eseguibili contengono una sezione che specifica le informazioni sul controllo dell'account utente (UAC). Se si specifica/MANIFEST, ma non si specifica né [/MANIFESTUAC](manifestuac-embeds-uac-information-in-manifest.md) né [/dll](dll-build-a-dll.md), nel manifesto verrà inserito un frammento del controllo dell'account utente predefinito con il livello di controllo dell'account utente impostato su *asInvoker* . Per ulteriori informazioni sui livelli di controllo dell'account utente, vedere [/MANIFESTUAC (incorpora le informazioni sul controllo dell'account utente nel manifesto)](manifestuac-embeds-uac-information-in-manifest.md).

Per modificare il comportamento predefinito del controllo dell'account utente, effettuare una delle operazioni seguenti:

- Specificare l'opzione /MANIFESTUAC e impostare il livello del controllo dell'account utente sul valore desiderato.

- In alternativa, l'opzione /MANIFESTUAC:NO se non si desidera generare un frammento del controllo dell'account utente nel manifesto.

Se non si specifica/MANIFEST, ma si specificano i commenti [/MANIFESTDEPENDENCY](manifestdependency-specify-manifest-dependencies.md) , viene creato un file manifesto. Un file manifesto non viene creato se si specifica /MANIFEST:NO.

Se si specifica /MANIFEST, il nome del file manifesto è lo stesso del nome del file di output con aggiunta l'estensione manifest. Ad esempio, se il nome del file di output è MyFile.exe, il nome del file manifesto è MyFile.exe.manifest.  Se si specifica/MANIFESTFILE:*Name*, il nome del manifesto corrisponde a quello specificato nel *nome*.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere il nodo **Linker**.

1. Selezionare la pagina delle proprietà **file manifesto** .

1. Modificare la proprietà **Genera manifesto** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateManifest%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
