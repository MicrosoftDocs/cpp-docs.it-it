---
title: -Fe (nome al File EXE) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /fe
dev_langs:
- C++
helpviewer_keywords:
- -Fe compiler option [C++]
- executable files, renaming
- rename file compiler option [C++]
- /Fe compiler option [C++]
- Fe compiler option [C++]
ms.assetid: 49f594fd-5e94-45fe-a1bf-7c9f2abb6437
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0afd8a863c9b8482e2b7f3868047845818bd2923
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32377057"
---
# <a name="fe-name-exe-file"></a>/Fe (Specifica file EXE)

Specifica un nome e una directory per il file .exe o DLL creato dal compilatore.

## <a name="syntax"></a>Sintassi

> **/FE**[_pathname_]  
> **/ Fe:** _pathname_  

### <a name="arguments"></a>Argomenti

*nome del percorso*<br/>
Il percorso relativo o assoluto e nome file di base o il percorso relativo o assoluto per una directory o un nome di file di base da utilizzare per il file eseguibile generato.

## <a name="remarks"></a>Note

Il **/Fe** opzione consente di specificare la directory di output, nome del file eseguibile di output o entrambi, per il file eseguibile generato. Se *pathname* termina con un separatore di percorso (**&#92;**), si presuppone che per specificare solo la directory di output. In caso contrario, l'ultimo componente del *pathname* viene utilizzato come nome base file di output e il resto del *pathname* specifica la directory di output. Se *pathname* privo di eventuali separatori di percorso, si presuppone per specificare il nome del file di output nella directory corrente. Il *pathname* devono essere racchiusi tra virgolette doppie (**"**) se contiene caratteri che non possono essere in un percorso breve, ad esempio spazi, caratteri o i componenti del percorso più di otto caratteri estesi lungo.

Quando il **/Fe** opzione non è specificata, o quando un file di base non è specificato *pathname*, il compilatore genera il file di output di un nome predefinito utilizzando il nome base del primo file di origine o un oggetto specificato nella riga di comando e l'estensione .exe o DLL.

Se si specifica il [/c (compila senza collegamenti)](c-compile-without-linking.md) opzione **/Fe** non ha alcun effetto.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Aprire il **le proprietà di configurazione** > **Linker** > **generale** pagina delle proprietà.

1. Modificare il **File di Output** proprietà. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.

## <a name="example"></a>Esempio

Riga di comando seguente compila e collega tutti i file di origine C nella directory corrente. Il file eseguibile risultante è denominato PROCESS.exe e viene creato nella directory "C:\Users\User Name\repos\My Project\bin".

```
CL /Fe"C:\Users\User Name\repos\My Project\bin\PROCESS" *.C
```

## <a name="example"></a>Esempio

Riga di comando seguente crea un file eseguibile in `C:\BIN` con lo stesso nome di base del primo file di origine nella directory corrente:

```
CL /FeC:\BIN\ *.C
```

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](../../build/reference/output-file-f-options.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)<br/>
