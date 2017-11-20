---
title: Matrici (estensioni del componente C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- cli::array
- details::array
- lang::array
dev_langs: C++
helpviewer_keywords:
- array keyword [C++]
- declaring arrays, about declaring arrays
- arrays [C++], multidimensional
- multidimensional arrays
- arrays [C++]
ms.assetid: 49445812-d775-4db1-a231-869598dbb955
caps.latest.revision: "34"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a2f0f4100344fbb2990e9feeb2b455642852c320
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="arrays-c-component-extensions"></a>Matrici (Estensioni del componente C++)
Il `Platform::Array<T>` tipo in C + + CX, o `array` parola chiave in C + + CLI, dichiara una matrice di un tipo specificato e il valore iniziale.  
  
## <a name="all-platforms"></a>Tutte le piattaforme  
 La matrice deve essere dichiarata utilizzando il modificatore handle a oggetto (^) dopo la parentesi angolare di chiusura (>) nella dichiarazione.  
 Il numero di elementi della matrice non è parte del tipo. Una variabile di matrice può fare riferimento alle matrici di dimensioni diverse.  
  
 A differenza di C++ standard, l'indice non è un sinonimo per operazioni aritmetiche e non è commutativa.  
  
 Per ulteriori informazioni sulle matrici, vedere:  
  
-   [Procedura: Usare matrici in C++/CLI](../dotnet/how-to-use-arrays-in-cpp-cli.md)  
    
-   [Elenchi di argomenti variabili (...) (C++/CLI)](../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md)  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Le matrici sono membri del `Platform` dello spazio dei nomi. Le matrici possono essere solo unidimensionale.  
  
### <a name="syntax"></a>Sintassi  
  
 Il primo esempio di sintassi utilizza il `ref new` parola chiave aggregata per allocare una matrice. Nel secondo esempio dichiara una matrice locale.  
  
```  
[qualifiers] [Platform::]Array<[qualifiers] array-type [,rank]>^ identifier = 
    ref new[Platform::]Array<initialization-type> [{initialization-list [,...]}]  
  
[qualifiers] [Platform::]Array<[qualifiers] array-type [,rank]>^ identifier = 
    {initialization-list [,...]}  
```  
  
 *qualificatori* [facoltativo]  
 Uno o più di questi identificatori di classe di archiviazione: [modificabile](../cpp/mutable-data-members-cpp.md), [volatile](../cpp/volatile-cpp.md), [const](../cpp/const-cpp.md), [extern](../cpp/using-extern-to-specify-linkage.md), [statico](../cpp/static-members-cpp.md).  
  
 `array-type`  
 Il tipo della variabile di matrice. I tipi validi sono classi di Windows Runtime e tipi fondamentali, classi di riferimento e strutture, classi di valore e le strutture e puntatori nativi (`type*`).  
  
 `rank`[facoltativo]  
 Il numero di dimensioni della matrice. Deve essere 1.  
  
 `identifier`  
 Il nome della variabile di matrice.  
  
 `initialization-type`  
 Il tipo dei valori che consentono di inizializzare la matrice. In genere, `array-type` e `initialization-type` sono dello stesso tipo. Tuttavia, i tipi possono essere diversi se esiste una conversione da `initialization-type` a `array-type`, ad esempio, se `initialization-type` è derivato da `array-type`.  
  
 `initialization-list`[facoltativo]  
 Un elenco delimitato da virgole dei valori in parentesi graffe che inizializza gli elementi della matrice. Ad esempio, se `rank-size-list` sono stati `(3)`, che dichiara una matrice unidimensionale di 3 elementi, `initialization list` potrebbe essere `{1,2,3}`.  
  
### <a name="remarks"></a>Note  
  
 È possibile rilevare in fase di compilazione se un tipo è una matrice con conteggio dei riferimenti con `__is_ref_array(type)`. Per ulteriori informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
### <a name="examples"></a>Esempi  
 L'esempio seguente crea una matrice unidimensionale che contiene 100 elementi.  
  
```cpp  
// cwr_array.cpp  
// compile with: /ZW  
using namespace Platform;  
ref class MyClass {};  
int main() {  
   // one-dimensional array  
   Array<MyClass^>^ My1DArray = ref new Array<MyClass^>(100);  
   My1DArray[99] = ref new MyClass();  
}  
```  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
  
### <a name="syntax"></a>Sintassi  
  
 Il primo esempio di sintassi utilizza il `gcnew` (parola chiave) da allocare una matrice. Nel secondo esempio dichiara una matrice locale.  
  
```  
[qualifiers] [cli::]array<[qualifiers] array-type [,rank]>^ identifier = 
    gcnew [cli::]array<initialization-type[,rank]>(rank-size-list[,...]) [{initialization-list [,...]}]  
  
[qualifiers] [cli::]array<[qualifiers] array-type [,rank]>^ identifier = 
    {initialization-list [,...]}  
```  
  
 *qualificatori* [facoltativo]  
 Uno o più di questi identificatori di classe di archiviazione: [modificabile](../cpp/mutable-data-members-cpp.md), [volatile](../cpp/volatile-cpp.md), [const](../cpp/const-cpp.md), [extern](../cpp/using-extern-to-specify-linkage.md), [statico](../cpp/static-members-cpp.md).  
  
 `array-type`  
 Il tipo della variabile di matrice. I tipi validi sono classi di Windows Runtime e tipi fondamentali, classi di riferimento e struct, classi e struct, puntatori nativi (`type*`) e i tipi nativi POD (dati non aggiornati).  
  
 `rank`[facoltativo]  
 Il numero di dimensioni della matrice. Il valore predefinito è 1. il valore massimo è 32. Ogni dimensione della matrice è una matrice.  
  
 `identifier`  
 Il nome della variabile di matrice.  
  
 `initialization-type`  
 Il tipo dei valori che consentono di inizializzare la matrice. In genere, `array-type` e `initialization-type` sono dello stesso tipo. Tuttavia, i tipi possono essere diversi se esiste una conversione da `initialization-type` a `array-type`, ad esempio, se `initialization-type` è derivato da `array-type`.  
  
 `rank-size-list`  
 Un elenco delimitato da virgole delle dimensioni di ciascuna dimensione della matrice. In alternativa, se il `initialization-list` viene specificato, il compilatore può dedurre le dimensioni di ogni dimensione e `rank-size-list` può essere omesso. 
  
 `initialization-list`[facoltativo]  
 Un elenco delimitato da virgole dei valori in parentesi graffe che inizializza gli elementi della matrice. O annidato in un elenco delimitato da virgole di *elenco di inizializzazione* gli elementi che consentono di inizializzare gli elementi in una matrice multidimensionale.  
  
 Ad esempio, se `rank-size-list` sono stati `(3)`, che dichiara una matrice unidimensionale di 3 elementi, `initialization list` potrebbe essere `{1,2,3}`. Se `rank-size-list` sono stati `(3,2,4)`, che dichiara una matrice tridimensionale di 3 elementi nella prima dimensione, 2 elementi nel secondo e 4 nella terza `initialization-list` potrebbe essere `{{1,2,3},{0,0},{-5,10,-21,99}}`.)  
  
### <a name="remarks"></a>Note  
  
 `array`nel [Platform, default e cli spazi dei nomi](../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md) dello spazio dei nomi.  
  
 Ad esempio C++ standard, gli indici di una matrice sono in base zero e una matrice è con l'indice utilizzando le parentesi quadre ([]). A differenza di C++ standard, vengono specificati gli indici di una matrice multidimensionale in un elenco di indici per ogni dimensione anziché in un set di operatori tra parentesi quadre ([]) per ogni dimensione. Ad esempio, *identificatore*[*index1*, *index2*] invece di *identificatore*[*index1*] [ *index2*].  
  
 Ereditano tutte le matrici gestite `System::Array`. Qualsiasi metodo o proprietà di `System::Array` può essere applicato direttamente alla variabile di matrice.  
  
 Quando si alloca una matrice il cui tipo di elemento è puntatore-a una classe gestita, gli elementi sono inizializzate su 0.  
  
 Quando si alloca una matrice il cui tipo di elemento è un tipo valore `V`, il costruttore predefinito per `V` viene applicato a ogni elemento della matrice. Per ulteriori informazioni, vedere [equivalenti di .NET Framework a tipi nativi C++ (C + + CLI)](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md).  
  
 In fase di compilazione, è possibile rilevare se un tipo è una matrice di runtime (CLR) di linguaggio comuni con `__is_ref_array(type)`. Per ulteriori informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 L'esempio seguente crea una matrice unidimensionale che contiene 100 elementi e una matrice tridimensionale con 3 elementi nella prima dimensione 5 elementi nel secondo e nel terzo 6 elementi.  
  
```cpp  
// clr_array.cpp  
// compile with: /clr  
ref class MyClass {};  
int main() {  
   // one-dimensional array  
   array<MyClass ^> ^ My1DArray = gcnew array<MyClass ^>(100);  
   My1DArray[99] = gcnew MyClass();  
  
   // three-dimensional array  
   array<MyClass ^, 3> ^ My3DArray = gcnew array<MyClass ^, 3>(3, 5, 6);  
   My3DArray[0,0,0] = gcnew MyClass();  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)