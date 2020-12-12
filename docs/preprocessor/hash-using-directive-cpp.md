---
description: 'Altre informazioni su: direttiva #using (C++/CLI)'
title: '#Direttiva using (C++/CLI)'
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
ms.openlocfilehash: 5903e3b5af4cd6ee40e0b087d52d1bd0115b1c6f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167526"
---
# <a name="using-directive-ccli"></a>direttiva #using (C++/CLI)

Importa i metadati in un programma compilato con [/CLR](../build/reference/clr-common-language-runtime-compilation.md).

## <a name="syntax"></a>Sintassi

> **`#using`***file* [ **`as_friend`** ]

### <a name="parameters"></a>Parametri

*file*\
Un file MSIL (Microsoft Intermediate Language) *`.dll`* ,, *`.exe`* *`.netmodule`* o *`.obj`* . ad esempio:

`#using <MyComponent.dll>`

**`as_friend`**\
Specifica che tutti i tipi nel *file* sono accessibili. Per ulteriori informazioni, vedere [assembly Friend (C++)](../dotnet/friend-assemblies-cpp.md).

## <a name="remarks"></a>Commenti

il *file* può essere un file Microsoft Intermediate Language (MSIL) che viene importato per i suoi dati gestiti e i costrutti gestiti. Se una DLL contiene un manifesto dell'assembly, verranno importate tutte le dll a cui viene fatto riferimento nel manifesto. Nell'assembly in fase di compilazione verranno elencati i *file* nei metadati come riferimento a un assembly.

Probabilmente il *file* non contiene un assembly (*file* è un modulo) e non si intende usare le informazioni sul tipo dal modulo nell'applicazione corrente (assembly). È possibile indicare che il modulo fa parte dell'assembly usando [/ASSEMBLYMODULE](../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md). I tipi nel modulo sono quindi disponibili per qualsiasi applicazione con riferimento nell'assembly.

Un'alternativa da usare **`#using`** è l'opzione del compilatore [/fu](../build/reference/fu-name-forced-hash-using-file.md) .

gli assembly con estensione exe passati a **`#using`** devono essere compilati usando uno dei compilatori di Visual Studio .NET, ad esempio Visual Basic o Visual C#.  Il tentativo di importare i metadati da un assembly con estensione exe compilato con **`/clr`** comporterà un'eccezione di caricamento file.

> [!NOTE]
> Un componente a cui si fa riferimento **`#using`** può essere eseguito con una versione diversa del file importato in fase di compilazione, facendo in modo che un'applicazione client fornisca risultati imprevisti.

Per consentire al compilatore di riconoscere un tipo in un assembly (non un modulo), è necessario forzare la risoluzione del tipo. È possibile forzarlo, ad esempio, definendo un'istanza del tipo. Esistono altri modi per risolvere i nomi dei tipi in un assembly per il compilatore. Se, ad esempio, si eredita da un tipo in un assembly, il nome del tipo diventa noto al compilatore.

Quando si importano metadati compilati dal codice sorgente usato [`__declspec(thread)`](../cpp/thread.md) , la semantica del thread non viene resa permanente nei metadati. Ad esempio, una variabile dichiarata con **`__declspec(thread)`** , compilata in un programma compilato per la .NET Framework Common Language Runtime e quindi importata tramite **`#using`** , non avrà **`__declspec(thread)`** la semantica sulla variabile.

Tutti i tipi importati (sia gestiti che nativi) in un file a cui fa riferimento **`#using`** sono disponibili, ma il compilatore considera i tipi nativi come dichiarazioni, non le definizioni.

Viene fatto automaticamente riferimento a mscorlib.dll durante la compilazione con **`/clr`** .

La variabile di ambiente LIBPATH specifica le directory in cui eseguire la ricerca quando il compilatore risolve i nomi di file passati a **`#using`** .

Il compilatore cerca i riferimenti lungo il percorso seguente:

- Percorso specificato nell' **`#using`** istruzione.

- La directory corrente.

- Directory di sistema di .NET Framework.

- Directory aggiunte con l' [`/AI`](../build/reference/ai-specify-metadata-directories.md) opzione del compilatore.

- Directory nella variabile di ambiente LIBPATH.

## <a name="examples"></a>Esempio

È possibile compilare un assembly che fa riferimento a un secondo assembly che a sua volta fa riferimento a un terzo assembly. È necessario fare riferimento in modo esplicito al terzo assembly dal primo se si usa in modo esplicito uno dei relativi tipi.

```cpp
// using_assembly_A.cpp
// compile with: /clr /LD
public ref class A {};
```

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

Nell'esempio seguente, il compilatore non segnala un errore relativo al riferimento *using_assembly_A.dll*, perché il programma non usa alcuno dei tipi definiti in *using_assembly_A. cpp*.

```cpp
// using_assembly_C.cpp
// compile with: /clr
#using "using_assembly_B.dll"
int main() {
   B b;
   b.Test();
}
```

## <a name="see-also"></a>Vedi anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)
