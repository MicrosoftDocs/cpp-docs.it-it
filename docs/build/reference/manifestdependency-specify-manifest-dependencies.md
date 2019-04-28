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
ms.openlocfilehash: 676059b8d398fd108d8f8fc163c85a3da3c657b4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62321592"
---
# <a name="manifestdependency-specify-manifest-dependencies"></a>/MANIFESTDEPENDENCY (Specifica le dipendenze tra manifesti)

```
/MANIFESTDEPENDENCY:manifest_dependency
```

## <a name="remarks"></a>Note

/MANIFESTDEPENDENCY consente di specificare gli attributi che verranno inseriti nella \<dipendenza > sezione del file manifesto.

Visualizzare [/MANIFEST (Crea Side-by-Side manifesto dell'Assembly)](manifest-create-side-by-side-assembly-manifest.md) per informazioni su come creare un file manifesto.

Per altre informazioni sul \<dipendenza > sezione del file manifesto, vedere [Publisher Configuration Files](/windows/desktop/SbsCs/publisher-configuration-files).

Informazioni /MANIFESTDEPENDENCY possono essere passate al linker in uno dei due modi:

- Direttamente nella riga di comando (o in un file di risposta) con /MANIFESTDEPENDENCY.

- Tramite il [commento](../../preprocessor/comment-c-cpp.md) pragma.

L'esempio seguente mostra un commento /MANIFESTDEPENDENCY tramito il pragma,

```cpp
#pragma comment(linker, "\"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"")
```

che restituisce la seguente voce nel file manifesto:

```xml
<dependency>
  <dependentAssembly>
    <assemblyIdentity type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*' />
  </dependentAssembly>
</dependency>
```

I commenti /MANIFESTDEPENDENCY stesso possono essere passati dalla riga di comando come indicato di seguito:

```cmd
"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"
```

Il linker verrà raccogliere commenti /MANIFESTDEPENDENCY, eliminare le voci duplicate e quindi aggiungere la stringa XML risultante al file manifesto.  Se il linker vengono recuperate le voci in conflitto, il file manifesto verrà danneggiarsi e l'applicazione avrà esito negativo avviare (è possibile aggiungere una voce nel registro eventi, che indica l'origine dell'errore).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **File manifesto** pagina delle proprietà.

1. Modificare il **dipendenze aggiuntive manifesto** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalManifestDependencies%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
