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
ms.openlocfilehash: f0bd8f3a96555cc29d06f74fb44a73bbed32889b
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825578"
---
# <a name="fe-name-exe-file"></a>/Fe (Specifica file EXE)

Specifica un nome e una directory per il file exe o la DLL creata dal compilatore.

## <a name="syntax"></a>Sintassi

> **/Fe**[_percorso_] \
> **/Fe:** _pathname_

### <a name="arguments"></a>Argomenti

*percorso*<br/>
Il percorso relativo o assoluto e il nome del file di base, il percorso relativo o assoluto di una directory o il nome del file di base da usare per l'eseguibile generato.

## <a name="remarks"></a>Osservazioni

L'opzione **/Fe** consente di specificare la directory di output, il nome dell'eseguibile di output o entrambi per il file eseguibile generato. Se *il percorso termina* in un separatore di percorso (**&#92;**), si presuppone che specifichi solo la directory di output. In caso contrario, l'ultimo componente di *pathname* viene usato come nome di base del file di output e il resto del *percorso* specifica la directory di output. Se *pathname* non ha alcun separatore di percorso, si presuppone che specifichi il nome del file di output nella directory corrente. Il *percorso deve essere* racchiuso tra virgolette doppie (**"**) se contiene caratteri che non possono trovarsi in un percorso breve, ad esempio spazi, caratteri estesi o componenti di percorso di lunghezza superiore a otto caratteri.

Quando l'opzione **/Fe** non è specificata o quando non si specifica un nome di base di file in *pathname*, il compilatore assegna al file di output un nome predefinito che usa il nome di base del primo file di origine o oggetto specificato nella riga di comando e con estensione exe o dll.

Se si specifica l'opzione [/c (compila senza collegamento)](c-compile-without-linking.md) , **/Fe** non ha alcun effetto.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Aprire la pagina delle proprietà**generale** del**linker** >  **Proprietà** > di configurazione.

1. Modificare la proprietà **file di output** . Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.

## <a name="example"></a>Esempio

La riga di comando seguente compila e collega tutti i file di origine C nella directory corrente. Il file eseguibile risultante è denominato PROCESS. exe e viene creato nella directory "C:\Utenti\nome Name\repos\My Project\bin".

```
CL /Fe"C:\Users\User Name\repos\My Project\bin\PROCESS" *.C
```

## <a name="example"></a>Esempio

La riga di comando seguente crea un file eseguibile `C:\BIN` con lo stesso nome di base del primo file di origine nella directory corrente:

```
CL /FeC:\BIN\ *.C
```

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Specifica del nome del percorso](specifying-the-pathname.md)<br/>
