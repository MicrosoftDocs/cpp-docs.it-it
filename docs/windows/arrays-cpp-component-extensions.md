---
title: "Arrays (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "cli::array"
  - "details::array"
  - "lang::array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "array keyword [C++]"
  - "declaring arrays, about declaring arrays"
  - "arrays [C++], multidimensional"
  - "multidimensional arrays"
  - "arrays [C++]"
ms.assetid: 49445812-d775-4db1-a231-869598dbb955
caps.latest.revision: 34
caps.handback.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Arrays (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo `Platform::Array<T>` in [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] o la parola chiave `array` in [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)], dichiara un array di un tipo e valore iniziale specificati.  
  
## Tutte le piattaforme  
 L'array deve essere dichiarato utilizzando il modificatore dell'handle a oggetto \(^\) dopo la chiusura delle parentesi angolari \(\>\) nella dichiarazione.  
  
 Il numero di elementi dell'array non fa parte del tipo.  Una variabile array può fare riferimento ad array di diverse dimensioni.  
  
 Diversamente dallo standard C\+\+, la sottoscrizione non è sinonimo dell'aritmetica dei puntatori e non è commutativa.  
  
 Per ulteriori informazioni sugli array, vedere:  
  
-   [Vovariante di matrici](../misc/array-covariance.md)  
  
-   [Procedura: utilizzare matrici in C\+\+\/CLI](../dotnet/how-to-use-arrays-in-cpp-cli.md)  
  
-   [Procedura: creare matrici multidimensionali](../misc/how-to-create-multidimension-arrays.md)  
  
-   [Procedura: creare matrici di matrici gestite \(matrici irregolari\)](../misc/how-to-create-arrays-of-managed-arrays-jagged-arrays.md)  
  
-   [Procedura: trasformare typedef per matrici gestite](../misc/how-to-make-typedefs-for-managed-arrays.md)  
  
-   [Procedura: utilizzare matrici gestite come parametri di tipo modello](../misc/how-to-use-managed-arrays-as-template-type-parameters.md)  
  
-   [Variable Argument Lists \(...\) \(C\+\+\/CLI\)](../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md)  
  
-   [Procedura: ordinare matrici](../misc/how-to-sort-arrays.md)  
  
-   [Procedura: ordinare matrici mediante criteri personalizzati](../misc/how-to-sort-arrays-using-custom-criteria.md)  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 Gli array sono membri dello spazio dei nomi `Platform`.  Gli array possono essere solo unidimensionali.  
  
 **Sintassi**  
  
 Il primo esempio della sintassi utilizza la parola chiave di aggregazione `ref new` per allocare un array.  Il secondo esempio dichiara un array locale.  
  
```  
  
        [qualifiers] [Platform::]Array<[qualifiers] array-type [,rank]>^ identifier = ref new [Platform::]Array< initialization-type > [{initialization-list [,...]}]  
  
[qualifiers] [Platform::]Array<[qualifiers] array-type [,rank]>^ identifier = {initialization-list [,...]}  
  
```  
  
 *qualifiers* \[facoltativo\]  
 Uno o più di questi identificatori di classe di archiviazione: [mutabile](../cpp/mutable-data-members-cpp.md), [volatile](../cpp/volatile-cpp.md), [const](../cpp/const-cpp.md), [esterno](../cpp/using-extern-to-specify-linkage.md), [statico](../misc/static-cpp.md).  
  
 `array-type`  
 Il tipo della variabile dell'array.  I tipi validi sono classi di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e i tipi fondamentali, classi e strutture di riferimento, classi e strutture di valore e puntatori nativi \(`type``*`\).  
  
 `rank` \[facoltativo\]  
 Numero di dimensioni della matrice.  Deve essere 1.  
  
 `identifier`  
 Il nome della variabile array.  
  
 `initialization-type`  
 Il tipo dei valori che inizializzano l'array.  In genere, `array-type` e `initialization-type` sono lo stesso tipo.  Tuttavia, i tipi possono essere differenti se esiste una conversione da `initialization-type` a `array-type`, ad esempio se `initialization-type` è derivato da `array-type`.  
  
 `initialization-list` \[facoltativo\]  
 Un elenco di valori delimitati da virgole tra parentesi curve che inizializza gli elementi dell'array.  Ad esempio, se `rank-size-list` fosse `(3)`, che dichiara un array unidimensionale di 3 elementi, `initialization list` potrebbe essere `{1,2,3}`.  
  
 **Osservazioni**  
  
 È possibile rilevare in fase di compilazione se un tipo è un array di riferimento calcolato con `__is_ref_array(``type``)`.  Per ulteriori informazioni, vedere [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
### Esempi  
 L'esempio seguente crea un array unidimensionale con 100 elementi.  
  
```  
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
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Sintassi**  
  
 Il primo esempio della sintassi utilizza la parola chiave `gcnew` per allocare un array.  Il secondo esempio dichiara un array locale.  
  
```  
  
        [qualifiers] [cli::]array<[qualifiers] array-type [,rank] >^ identifier = gcnew [cli::]array< initialization-type [,rank] >(rank-size-list[,...]) [{initialization-list [,...]}]  
  
[qualifiers] [cli::]array<[qualifiers] array-type [,rank] >^ identifier = {initialization-list [,...]}  
  
```  
  
 *qualifiers* \[facoltativo\]  
 Uno o più di questi identificatori di classe di archiviazione: [mutabile](../cpp/mutable-data-members-cpp.md), [volatile](../cpp/volatile-cpp.md), [const](../cpp/const-cpp.md), [esterno](../cpp/using-extern-to-specify-linkage.md), [statico](../misc/static-cpp.md).  
  
 `array-type`  
 Il tipo della variabile dell'array.  I tipi validi sono classi di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e tipi di base, classi e strutture di riferimento, classi e strutture di valore, puntatori nativi \(`type``*`\) e tipi nativi POD \(dati non aggiornati\) normali.  
  
 `rank` \[facoltativo\]  
 Numero di dimensioni della matrice.  L'impostazione predefinita è 1; il valore massimo è 32.  Ogni dimensione dell'array è essa stessa un array.  
  
 `identifier`  
 Il nome della variabile array.  
  
 `initialization-type`  
 Il tipo dei valori che inizializzano l'array.  In genere, `array-type` e `initialization-type` sono lo stesso tipo.  Tuttavia, i tipi possono essere differenti se esiste una conversione da `initialization-type` a `array-type`, ad esempio se `initialization-type` è derivato da `array-type`.  
  
 `rank-size-list`  
 Un elenco delimitato da virgole della dimensione di ogni dimensione dell'array.  In alternativa, se il parametro di `initialization-list` viene specificato, il compilatore può dedurre la misura di ciascuna dimensione e `rank-size-list` può essere omesso.  Per ulteriori informazioni, vedere [Procedura: creare matrici multidimensionali](../misc/how-to-create-multidimension-arrays.md).  
  
 `initialization-list` \[facoltativo\]  
 Un elenco di valori delimitati da virgole tra parentesi curve che inizializza gli elementi dell'array.  O un elenco delimitato da virgole di elementi annidati di *initialization\-list* che inizializzano gli elementi in un array multidimensionale.  
  
 Ad esempio, se `rank-size-list` fosse `(3)`, che dichiara un array unidimensionale di 3 elementi, `initialization list` potrebbe essere `{1,2,3}`.  Se `rank-size-list` fosse `(3,2,4)`, che dichiara un array tridimensionale di 3 elementi nella prima dimensione, 2 elementi nella seconda e 4 elementi nella terza, `initialization-list` potrebbe essere `{{1,2,3},{0,0},{-5,10,-21,99}}`\).  
  
 **Osservazioni**  
  
 `array` è nello spazio dei nomi [Platform, default, and cli Namespaces](../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md).  
  
 Come C\+\+ standard, gli indici di un array sono in base zero e un array è sottoscritto utilizzando le parentesi quadre \(\[\]\).  Diversamente dallo standard C\+\+, gli indici di un array multidimensionale vengono specificati in un elenco di indici per ogni dimensione anziché un set di operatori di parentesi quadra \(\[\]\) per ogni dimensione.  Ad esempio, *identifier*\[*index1*, *index2*\] al posto di *identifier*\[*index1*\]\[ *index2*\].  
  
 Tutte gli array gestiti ereditano da `System::Array`.  Qualsiasi metodo o proprietà di `System::Array` può essere applicata direttamente alla variabile di array.  
  
 Quando si alloca un array il cui tipo di elemento è puntatore ad una classe gestita, gli elementi sono inizializzati a 0.  
  
 Quando si alloca un array il cui tipo di elemento è un tipo di valore `V`, il costruttore predefinito per `V` viene applicato a ogni elemento dell'array.  Per ulteriori informazioni, vedere [.Equivalenti di .NET Framework a tipi nativi C\+\+](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md).  
  
 In fase di compilazione, è possibile rilevare se un tipo è un array di Common Language Runtime \(CLR\) con `__is_ref_array(``type``)`.  Per ulteriori informazioni, vedere [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 L'esempio seguente crea un array unidimensionale con 100 elementi e un array tridimensionale con 3 elementi nella prima dimensione, 5 elementi nella seconda e 6 elementi nella terza.  
  
```  
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
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)