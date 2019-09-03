---
title: '#direttiva using (C++/CLI)'
ms.date: 08/29/2019
f1_keywords:
- friend_as_cpp
- '#using'
- friend_as
- '#using_cpp'
helpviewer_keywords:
- using directive (#using)
- '#using directive'
- LIBPATH environment variable
- preprocessor, directives
ms.assetid: 870b15e5-f361-40a8-ba1c-c57d75c8809a
ms.openlocfilehash: 5dae5c277055157aef5451c19ee020fbbd2aaccb
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220207"
---
# <a name="using-directive-ccli"></a>direttiva #using (C++/CLI)

Importa i metadati in un programma compilato con [/CLR](../build/reference/clr-common-language-runtime-compilation.md).

## <a name="syntax"></a>Sintassi

> **#using** *file* [**as_friend**]

### <a name="parameters"></a>Parametri

*file*\
File MSIL con estensione dll, exe, netmodule oppure obj. Ad esempio,

`#using <MyComponent.dll>`

**as_friend**\
Specifica che tutti i tipi nel *file* sono accessibili. Per ulteriori informazioni, vedere [assembly Friend (C++)](../dotnet/friend-assemblies-cpp.md).

## <a name="remarks"></a>Note

il *file* può essere un file Microsoft Intermediate Language (MSIL) che viene importato per i suoi dati gestiti e i costrutti gestiti. Se un file con estensione dll contiene un manifesto dell'assembly, verranno importati tutti i file con estensione dll a cui viene fatto riferimento nel manifesto e l'assembly in cui si sta creando elenca i *file* nei metadati come riferimento a un assembly.

Se il *file* non contiene un assembly, se il *file* è un modulo, e se non si intende usare le informazioni sui tipi del modulo nell'applicazione (assembly) corrente, è possibile indicare semplicemente che il modulo è parte dell'assembly. usare [/ASSEMBLYMODULE](../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md). I tipi nel modulo sono quindi disponibili per qualsiasi applicazione con riferimento nell'assembly.

Un'alternativa all'uso di **#using** è l'opzione del compilatore [/fu](../build/reference/fu-name-forced-hash-using-file.md) .

gli assembly con estensione exe passati a **#using** devono essere compilati usando uno dei compilatori di Visual Studio .NET C#(ad esempio Visual Basic o Visual).  Se si prova a importare i metadati di un assembly con estensione exe compilato con `/clr`, verrò generata un'eccezione di caricamento del file.

> [!NOTE]
> Un componente a cui si fa riferimento con **#using** può essere eseguito con una versione diversa del file importato in fase di compilazione, facendo in modo che un'applicazione client fornisca risultati imprevisti.

Per consentire al compilatore di riconoscere un tipo in un assembly (non un modulo), è necessario forzare la risoluzione del tipo. È possibile forzarlo, ad esempio, definendo un'istanza del tipo. Esistono altri modi per risolvere i nomi dei tipi in un assembly per il compilatore. Se, ad esempio, si eredita da un tipo in un assembly, il nome del tipo diventa noto al compilatore.

Quando si importano metadati compilati dal codice sorgente che utilizza [_ _ declspec (thread)](../cpp/thread.md), la semantica del thread non viene mantenute nei metadati. Ad esempio, una variabile dichiarata con **_ _ declspec (thread)** , compilata in un programma compilato per la .NET Framework Common Language Runtime e quindi importata tramite **#using**, non avrà la semantica **_ _ declspec (thread)** sulla variabile.

Sono disponibili tutti i tipi importati (sia gestiti che nativi) in un file a cui viene fatto riferimento da **#using** , ma il compilatore considera i tipi nativi come dichiarazioni, non come definizioni.

Il file mscorlib.dll viene automaticamente referenziato se si esegue la compilazione con `/clr`.

La variabile di ambiente LIBPATH specifica le directory in cui eseguire la ricerca quando il compilatore risolve i nomi di file passati a **#using**.

Il compilatore cerca i riferimenti lungo il percorso seguente:

- Percorso specificato nell'istruzione **#using** .

- Directory corrente.

- Directory di sistema di .NET Framework.

- Directory aggiunte con l'opzione del compilatore [/ai](../build/reference/ai-specify-metadata-directories.md) .

- Directory nella variabile di ambiente LIBPATH.

## <a name="example"></a>Esempio

Se si compila un assembly (C) e si fa riferimento a un assembly (B) che a sua volta fa riferimento a un altro assembly (A), non è necessario fare riferimento in modo esplicito all'assembly A a meno che non si usi in modo esplicito uno dei tipi di a in C.

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

Nell'esempio seguente non è presente alcun errore del compilatore per non fare riferimento a *using_assembly_A. dll*, perché il programma non usa alcuno dei tipi definiti in *using_assembly_A. cpp*.

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
