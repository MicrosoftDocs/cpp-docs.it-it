---
title: '#Direttiva using (C + + CLI) | Microsoft Docs'
ms.custom: ''
ms.date: 10/18/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- friend_as_cpp
- '#using'
- friend_as
- '#using_cpp'
dev_langs:
- C++
helpviewer_keywords:
- using directive (#using)
- '#using directive'
- LIBPATH environment variable
- preprocessor, directives
ms.assetid: 870b15e5-f361-40a8-ba1c-c57d75c8809a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 23e3447538590ec6a0e9392800bc6638900c6d6d
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49808693"
---
# <a name="using-directive-ccli"></a>#using (direttiva) (C + + CLI)

Importa i metadati in un programma compilato con [/clr](../build/reference/clr-common-language-runtime-compilation.md).

## <a name="syntax"></a>Sintassi

```
#using file [as_friend]
```

### <a name="parameters"></a>Parametri

*file*<br/>
File MSIL con estensione dll, exe, netmodule oppure obj. Ad esempio,

`#using <MyComponent.dll>`

*as_friend*<br/>
Specifica che tutti i tipi nella *file* sono accessibili. Per altre informazioni, vedere [gli assembly Friend (C++)](../dotnet/friend-assemblies-cpp.md).

## <a name="remarks"></a>Note

*file* può essere un file Microsoft intermediate language (MSIL) importato per dati e costrutti gestiti. Se un file con estensione dll contiene un manifesto dell'assembly, quindi vengono importati tutti i file con estensione DLL a cui fa riferimento il manifesto e l'assembly a cui si sta compilando elencherà *file* nei metadati come un riferimento all'assembly.

Se *file* non contiene un assembly (se *file* è un modulo) e se non si intende usare le informazioni sul tipo dal modulo nell'applicazione corrente (assembly), è possibile semplicemente indicare che il modulo è parte dell'assembly; usare [/ASSEMBLYMODULE](../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md). I tipi nel modulo sono quindi disponibili per qualsiasi applicazione con riferimento nell'assembly.

Un'alternativa all'utilizzo **#using** è la [/FU](../build/reference/fu-name-forced-hash-using-file.md) opzione del compilatore.

gli assembly .exe passato a **#using** deve essere compilato usando uno dei compilatori Visual Studio .NET (Visual Basic o Visual c#, ad esempio).  Se si prova a importare i metadati di un assembly con estensione exe compilato con `/clr`, verrò generata un'eccezione di caricamento del file.

> [!NOTE]
> Un componente di cui viene fatto riferimento con **#using** può essere eseguito con una versione diversa del file importato in fase di compilazione, causando un'applicazione client per produrre risultati imprevisti.

Affinché il compilatore possa riconoscere un tipo in un assembly (non un modulo), deve essere forzata la risoluzione del tipo, è possibile ripetere l'operazione, ad esempio, con la definizione di un'istanza del tipo. Esistono altri modi per risolvere i nomi dei tipi in un assembly per il compilatore, ad esempio, se si eredita da un tipo in un assembly, il nome del tipo verrà quindi diventare noto al compilatore.

Quando si importano metadati compilati dal codice sorgente che utilizza [declspec](../cpp/thread.md), la semantica del thread non viene mantenuta nei metadati. Ad esempio, una variabile dichiarata con **declspec**, compilata in un programma che si intende la compilazione per .NET Framework common language runtime e quindi importate tramite **#using**, non sarà più possibile **declspec** semantica sulla variabile.

Tutti i tipi (gestiti e nativi) in un file a cui fanno riferimento importati **#using** sono disponibili, ma il compilatore considera i tipi nativi come dichiarazioni e non le definizioni.

Il file mscorlib.dll viene automaticamente referenziato se si esegue la compilazione con `/clr`.

La variabile di ambiente LIBPATH specifica le directory in cui verranno cercate quando il compilatore tenta di risolvere i nomi di file passati alla **#using**.

Il compilatore eseguirà la ricerca dei riferimenti nel percorso seguente:

- Un percorso specificato nella **#using** istruzione.

- La directory corrente.

- Directory di sistema di .NET Framework.

- Directiry aggiunte con il [/AI](../build/reference/ai-specify-metadata-directories.md) opzione del compilatore.

- Directory nella variabile di ambiente LIBPATH.

## <a name="example"></a>Esempio

Se si compila un assembly (C) e si fa riferimento a un assembly (B) che fa riferimento a un altro assembly (A), non sarà necessario fare riferimento esplicitamente all'assembly A a meno che non vengano utilizzati esplicitamente i tipi di A in C.

```cpp
// using_assembly_A.cpp
// compile with: /clr /LD
public ref class A {};
```

## <a name="example"></a>Esempio

```cpp
// using_assembly_B.cpp
// compile with: /clr /LD
#using "using_assembly_A.dll"
public ref class B {
public:
   void Test(A a) {}
   void Test() {}
};
```

## <a name="example"></a>Esempio

Nell'esempio seguente non viene generato alcun errore del compilatore perché non si fa riferimento a using_assembly_A.dll perché il programma non utilizza alcun tipo definito in using_assembly_A.cpp.

```cpp
// using_assembly_C.cpp
// compile with: /clr
#using "using_assembly_B.dll"
int main() {
   B b;
   b.Test();
}
```

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)