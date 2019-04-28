---
title: /Fe (Specifica file EXE)
ms.date: 11/04/2016
f1_keywords:
- /fe
helpviewer_keywords:
- -Fe compiler option [C++]
- executable files, renaming
- rename file compiler option [C++]
- /Fe compiler option [C++]
- Fe compiler option [C++]
ms.assetid: 49f594fd-5e94-45fe-a1bf-7c9f2abb6437
ms.openlocfilehash: 5901ef1997cfea84c97b6d91b30335ff7dbc1d9f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62292615"
---
# <a name="fe-name-exe-file"></a>/Fe (Specifica file EXE)

Specifica un nome e una directory per il file .exe o DLL creata dal compilatore.

## <a name="syntax"></a>Sintassi

> **/Fe**[_pathname_] **/Fe:** _pathname_

### <a name="arguments"></a>Argomenti

*pathname*<br/>
Il percorso relativo o assoluto e nome file di base oppure un percorso relativo o assoluto per una directory o un nome di file di base da utilizzare per il file eseguibile generato.

## <a name="remarks"></a>Note

Il **/Fe** opzione consente di specificare la directory di output, nome del file eseguibile di output o entrambi, per il file eseguibile generato. Se *pathname* termina con un separatore di percorso (**&#92;**), si presuppone per specificare solo la directory di output. In caso contrario, l'ultimo componente del *pathname* viene usato come nome base file di output e il resto del *pathname* specifica la directory di output. Se *pathname* è privo di eventuali separatori di percorso, si presuppone per specificare il nome del file di output nella directory corrente. Il *pathname* devono essere racchiusi tra virgolette doppie (**"**) se contiene tutti i caratteri non possono trovarsi in un percorso breve, ad esempio spazi, caratteri o i componenti del percorso più di otto caratteri estesi lungo.

Quando la **/Fe** opzione non è specificata, o quando un file di base non è specificato *pathname*, il compilatore assegna il file di output un nome predefinito con il nome di base del primo file di origine o un oggetto specificato nella riga di comando e l'estensione .exe o. dll.

Se si specifica la [/c (compila senza collegamenti)](c-compile-without-linking.md) opzione **/Fe** non ha alcun effetto.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

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

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Specifica del nome del percorso](specifying-the-pathname.md)<br/>
