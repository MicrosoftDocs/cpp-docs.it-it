---
title: /MANIFESTDEPENDENCY (Specifica le dipendenze tra manifesti)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.AdditionalManifestDependencies
helpviewer_keywords:
- MANIFESTDEPENDENCY linker option
- /MANIFESTDEPENDENCY linker option
- -MANIFESTDEPENDENCY linker option
ms.assetid: e4b68313-33a2-4c3e-908e-ac2b9f7d6a73
ms.openlocfilehash: 43239efe70cc555d1a7e03c5d67e99e40ccd480e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492700"
---
# <a name="manifestdependency-specify-manifest-dependencies"></a>/MANIFESTDEPENDENCY (Specifica le dipendenze tra manifesti)

```
/MANIFESTDEPENDENCY:manifest_dependency
```

## <a name="remarks"></a>Note

/MANIFESTDEPENDENCY consente di specificare gli attributi che verranno inseriti nella \<sezione > delle dipendenze del file manifesto.

Vedere [/manifest (Crea manifesto dell'assembly affiancato)](manifest-create-side-by-side-assembly-manifest.md) per informazioni su come creare un file manifesto.

Per ulteriori informazioni sulla \<sezione > delle dipendenze del file manifesto, vedere [file di configurazione dell'editore](/windows/win32/SbsCs/publisher-configuration-files).

Le informazioni/MANIFESTDEPENDENCY possono essere passate al linker in uno dei due modi seguenti:

- Direttamente nella riga di comando o in un file di risposta con/MANIFESTDEPENDENCY.

- Tramite il pragma [Comment](../../preprocessor/comment-c-cpp.md) .

Nell'esempio seguente viene illustrato un commento/MANIFESTDEPENDENCY passato tramite pragma,

```cpp
#pragma comment(linker, "\"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"")
```

il risultato è la seguente voce nel file manifesto:

```xml
<dependency>
  <dependentAssembly>
    <assemblyIdentity type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*' />
  </dependentAssembly>
</dependency>
```

Gli stessi commenti/MANIFESTDEPENDENCY possono essere passati alla riga di comando come indicato di seguito:

```cmd
"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"
```

Il linker raccoglierà i commenti/MANIFESTDEPENDENCY, eliminerà le voci duplicate e quindi aggiungerà la stringa XML risultante al file manifesto.  Se il linker rileva voci in conflitto, il file manifesto viene danneggiato e l'applicazione non viene avviata (è possibile aggiungere una voce al registro eventi, che indica l'origine dell'errore).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà del**file manifesto** del**linker** >  **Proprietà** > di configurazione.

1. Modificare la proprietà delle dipendenze del **manifesto aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalManifestDependencies%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
