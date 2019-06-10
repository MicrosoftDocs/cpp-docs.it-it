---
title: Variabili di ambiente CL
ms.date: 06/06/2019
f1_keywords:
- cl
helpviewer_keywords:
- INCLUDE environment variable
- cl.exe compiler, environment variables
- LIBPATH environment variable
- environment variables, CL compiler
ms.assetid: 2606585b-a681-42ee-986e-1c9a2da32108
ms.openlocfilehash: 0f7930728ef1bf6bea50c4388d52d30c569a8795
ms.sourcegitcommit: 8adabe177d557c74566c13145196c11cef5d10d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/10/2019
ms.locfileid: "66821526"
---
# <a name="cl-environment-variables"></a>Variabili di ambiente CL

Lo strumento CL usa le seguenti variabili di ambiente:

- CL e \_CL_, se definito. Lo strumento CL antepone le opzioni e gli argomenti definiti nella variabile di ambiente CL agli argomenti della riga di comando e accoda le opzioni e gli argomenti definiti \_CL_, prima dell'elaborazione.

- Sono inclusi, che deve puntare alla sottodirectory \include dell'installazione di Visual Studio.

- LIBPATH, che specifica le directory per cercare i file di metadati a cui fa riferimento [#using](../../preprocessor/hash-using-directive-cpp.md). Per altre informazioni su LIBPATH, vedere [#using](../../preprocessor/hash-using-directive-cpp.md).

È possibile impostare il CL o \_variabile di ambiente CL_ usando la sintassi seguente:

> SET CL=[ [*option*] ... [*file*] ...] [/link *link-opt* ...] \
> IMPOSTARE \_CL\_= [[*opzione*]... [*file*]...] [/link *collegamento di-opt* ...]

Per informazioni dettagliate sugli argomenti di CL e \_vedere le variabili di ambiente CL_ [sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md).

È possibile utilizzare queste variabili di ambiente per definire i file e le opzioni utilizzate più di frequente. Usare quindi la riga di comando per fornire ulteriori file e le opzioni a CL per scopi specifici. CL e \_variabili di ambiente CL_ sono limitate a 1024 caratteri (il limite di input della riga di comando).

Non è possibile usare la [/D](d-preprocessor-definitions.md) opzione per definire un simbolo che usa un segno di uguale ( **=** ). In alternativa, è possibile usare il simbolo di cancelletto ( **#** ) per un segno di uguale. In questo modo, è possibile usare il CL o \_variabili di ambiente CL_ per definire le costanti del preprocessore con valori espliciti, ad esempio, `/DDEBUG#1` definire `DEBUG=1`.

Per informazioni correlate, vedere [impostare le variabili di ambiente](../setting-the-path-and-environment-variables-for-command-line-builds.md).

## <a name="examples"></a>Esempi

Il comando riportato di seguito è riportato un esempio di impostazione della variabile di ambiente CL:

> SET CL=/Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE.OBJ

Quando è impostata la variabile di ambiente CL, se si immette `CL INPUT.C` nella riga di comando, il comando effettivo diventa:

> CL /Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE.OBJ INPUT.C

Nell'esempio seguente un normale comando CL compila i file di origine FILE1.c e FILE2.c e quindi collega i file oggetto FILE1.obj, FILE2.obj e FILE3.obj:

> SET CL = FILE1. FILE2 C. C \
> SET \_CL_=FILE3.OBJ \
> CL

Queste variabili di ambiente effettuare la chiamata a CL hanno lo stesso effetto della riga di comando seguente:

> CL FILE1. FILE2 C. FILE3 C. OBJ

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del compilatore](compiler-command-line-syntax.md) \
[Opzioni del compilatore MSVC](compiler-options.md)
