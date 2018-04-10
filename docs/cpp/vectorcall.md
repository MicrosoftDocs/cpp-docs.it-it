---
title: vectorcall | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 1c95ed59-86c6-4857-b4ed-10519193f851
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 54c1473e2341c783ebf73883680d51f161d99163
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="vectorcall"></a>__vectorcall
**Sezione specifica Microsoft**  
  
 La convenzione di chiamata `__vectorcall` specifica che gli argomenti alle funzioni devono essere passati nei registri, quando possibile. `__vectorcall`utilizza per gli argomenti di registri più [fastcall](../cpp/fastcall.md) o il valore predefinito [convenzione di chiamata x64](../build/overview-of-x64-calling-conventions.md) utilizzare. La convenzione di chiamata `__vectorcall` è supportata solo nel codice nativo su processori x86 e x64 che includono Streaming SIMD Extensions 2 (SSE2) e versioni successive. Utilizzare `__vectorcall` per velocizzare le funzioni che passano più argomenti a virgola mobile o vettoriali SIMD ed eseguono operazioni che sfruttano gli argomenti caricati nei registri. Nell'elenco seguente sono indicate le funzionalità comuni alle implementazioni x86 e x64 di `__vectorcall`. Le differenze sono descritte più avanti in questo articolo.  
  
|Elemento|Implementazione|  
|-------------|--------------------|  
|Convenzione della decorazione dei nomi C|Nei nomi delle funzioni vengono utilizzati come suffisso due segni di chiocciola (@@) seguiti dal numero di byte (in decimali) nell'elenco dei parametri.|  
|Convenzione della conversione maiuscolo/minuscolo e viceversa|Non viene effettuata alcuna conversione maiuscolo/minuscolo.|  
  
 Utilizzando il [/Gv](../build/reference/gd-gr-gv-gz-calling-convention.md) l'opzione del compilatore, ogni funzione nel modulo viene compilata come `__vectorcall` , a meno che la funzione è una funzione membro, viene dichiarato con un attributo di convenzione di chiamata in conflitto, viene utilizzato un `vararg` variabile elenco di argomenti, o il nome `main`.  
  
 È possibile passare tre tipi di argomenti per registrare in `__vectorcall` funzioni: *tipo integer* valori, *vector tipo* valori, e *aggregazione vettore omogenea* (HVA ) i valori.  
  
 Un tipo Integer risponde a due requisiti, ovvero si adatta alle dimensioni native del registro del processore, ad esempio 4 byte in un computer x86 o 8 byte in un computer x64, ed è convertibile in un numero intero della lunghezza del registro e viceversa senza modificarne la rappresentazione di bit. Ad esempio, qualsiasi tipo che può essere trasformato in `int` su computer x86 (`long long` su computer x64), quale un tipo `char` o `short`, o di cui è possibile eseguire il cast in `int` (`long long` su computer x64) e di nuovo nel tipo originale senza modifiche è un tipo Integer. I tipi Integer includono il puntatore, il riferimento e i tipi `struct` o i tipi `union` di 4 byte (8 byte in x64) o meno. Su piattaforme x64 i tipi `struct` e i tipi `union` di dimensioni maggiori vengono passati per riferimento alla memoria allocata dal chiamante, mentre su piattaforme x86 vengono passati per valore nello stack.  
  
 Un tipo vettore può essere a virgola mobile, ad esempio `float` o `double`, oppure SIMD, ad esempio `__m128` o `__m256`.  
  
 Un tipo HVA è un tipo composto da membri dati (fino a quattro) con tipi vettore identici. Un tipo HVA ha lo stesso requisito di allineamento del tipo vettore dei relativi membri. Questo è un esempio di definizione `struct` di un tipo HVA contenente tre tipi vettore identici e allineamento a 32 byte:  
  
```cpp  
typedef struct {  
   __m256 x;  
   __m256 y;  
   __m256 z;  
} hva3;    // 3 element HVA type on __m256  
  
```  
  
 Dichiarare le funzioni in modo esplicito con la parola chiave `__vectorcall` nei file di intestazione per consentire il collegamento senza errori del codice compilato separatamente. Per utilizzare `__vectorcall`, le funzioni devono avere un prototipo e non possono utilizzare un elenco di argomenti a lunghezza variabile `vararg`.  
  
 Una funzione membro può essere dichiarata tramite l'identificatore `__vectorcall`. Il puntatore `this` nascosto viene passato per registro come primo argomento di tipo Integer.  
  
 Nei computer ARM `__vectorcall` viene accettato e ignorato dal compilatore.  
  
 Per le funzioni membro di classi non statiche, se la funzione viene definita non inline, il modificatore della convenzione di chiamata non deve essere specificato nella definizione non inline. Questo significa che per i membri non statici della classe, la convenzione di chiamata specificata durante la dichiarazione è presunta in corrispondenza della definizione. Data la definizione di classe seguente  
  
```cpp  
struct MyClass {  
   void __vectorcall mymethod();  
};  
```  
  
 il codice seguente  
  
```cpp  
void MyClass::mymethod() { return; }  
```  
  
 equivale a questo  
  
```cpp  
void __vectorcall MyClass::mymethod() { return; }  
```  
  
 Il modificatore della convenzione di chiamata `__vectorcall` deve essere specificato quando viene creato un puntatore a una funzione `__vectorcall`. Nell'esempio successivo viene creato un oggetto `typedef` per un puntatore a una funzione `__vectorcall` che accetta quattro argomenti `double` e restituisce un valore `__m256`:  
  
```cpp  
typedef __m256 (__vectorcall * vcfnptr)(double, double, double, double);  
```  
  
## <a name="vectorcall-convention-on-x64"></a>Convenzione __vectorcall su piattaforme x64  
 La convenzione di chiamata `__vectorcall` su piattaforme x64 estende la convenzione di chiamata standard x64 per sfruttare i registri aggiuntivi. Sia gli argomenti tipo Integer che gli argomenti tipo vettore vengono mappati ai registri in base alla posizione nell'elenco di argomenti. Gli argomenti HVA vengono allocati nei registri vettoriali inutilizzati.  
  
 Quando uno dei primi quattro argomenti, in ordine da sinistra a destra, sono argomenti di tipo Integer, vengono passati nel registro corrispondente a tale posizione, ovvero RCX, RDX, R8 o R9. Un puntatore nascosto `this` viene trattato come primo argomento di tipo Integer. Quando un argomento HVA in uno dei primi quattro argomenti non può essere passato nei registri disponibili, viene invece passato un riferimento alla memoria allocata dal chiamante nel registro dei tipi Integer corrispondente. Gli argomenti tipo Integer dopo la posizione del quarto parametro vengono passati allo stack.  
  
 Quando uno dei primi sei argomenti, in ordine da sinistra a destra, sono argomenti tipo vettore, vengono passati per valore nei registri vettoriali SSE da 0 a 5 in base alla posizione dell'argomento. I tipi a virgola mobile e `__m128` vengono passati nei registri XMM, mentre i tipi `__m256` vengono passati nei registri YMM. In questo caso esiste una differenza rispetto alla convenzione di chiamata x64 standard, poiché i tipi vettore sono passati per valore anziché per riferimento e vengono utilizzati registri aggiuntivi. Lo spazio dello shadow stack allocato per gli argomenti di tipo vettore è fissato a 8 byte e [/homeparams](../build/reference/homeparams-copy-register-parameters-to-stack.md) opzione non è valida. Gli argomenti tipo vettore nelle posizioni del settimo parametro e successive vengono passati nello stack per riferimento alla memoria allocata dal chiamante.  
  
 Dopo che i registri sono stati allocati per gli argomenti vettoriali, i membri dati degli argomenti HVA vengono allocati in ordine crescente ai registri vettoriali inutilizzati da XMM0 a XMM5 (o da YMM0 a YMM5), per i tipi `__m256`), finché sono disponibili registri sufficienti per l'intero HVA. Se non sono disponibili registri sufficienti, l'argomento HVA verrà passato per riferimento alla memoria allocata dal chiamante. Lo spazio dello shadow stack per un argomento HVA è fissato a 8 byte con contenuto non definito. Gli argomenti HVA vengono assegnati ai registri in ordine da sinistra a destra nell'elenco dei parametri e possono trovarsi in qualsiasi posizione. Gli argomenti HVA in una delle prime quattro posizioni non assegnati ai registri vettoriali vengono passati per riferimento nel registro di tipi Integer corrispondente a tale posizione. Gli argomenti HVA passati per riferimento dopo la posizione del quarto parametro vengono inseriti nello stack.  
  
 Quando possibile, i risultati di funzioni `__vectorcall` sono restituiti per valore in registri. I risultati di tipo Integer, inclusi i valori struct o union di 8 byte o meno, vengono restituiti per valore in RAX. I risultati di tipo vettore vengono restituiti per valore in XMM0 o in YMM0, a seconda della dimensione. Nei risultati HVA ogni elemento dati viene restituito per valore nei registri da XMM0 a XMM3 o da YMM0 a YMM3, in base alle dimensioni dell'elemento. I tipi di risultati che non rientrano nei registri corrispondenti vengono restituiti per riferimento alla memoria allocata dal chiamante.  
  
 Lo stack viene gestito dal chiamante nell'implementazione x64 di `__vectorcall`. Nel codice di prologo ed epilogo del chiamante viene allocato e pulito lo stack per la funzione chiamata. Gli argomenti vengono inseriti nello stack da destra a sinistra e viene allocato lo spazio dello shadow stack per gli argomenti passati nei registri.  
  
 Esempi:  
  
```cpp  
// crt_vc64.c  
// Build for amd64 with: cl /arch:AVX /W3 /FAs crt_vc64.c  
// This example creates an annotated assembly listing in  
// crt_vc64.asm.  
  
#include <intrin.h>  
#include <xmmintrin.h>  
  
typedef struct {  
   __m128 array[2];  
} hva2;    // 2 element HVA type on __m128  
  
typedef struct {  
   __m256 array[4];  
} hva4;    // 4 element HVA type on __m256  
  
// Example 1: All vectors  
// Passes a in XMM0, b in XMM1, c in YMM2, d in XMM3, e in YMM4.  
// Return value in XMM0.  
__m128 __vectorcall   
example1(__m128 a, __m128 b, __m256 c, __m128 d, __m256 e) {  
   return d;  
}  
  
// Example 2: Mixed int, float and vector parameters  
// Passes a in RCX, b in XMM1, c in R8, d in XMM3, e in YMM4,   
// f in XMM5, g pushed on stack.   
// Return value in YMM0.  
__m256 __vectorcall   
example2(int a, __m128 b, int c, __m128 d, __m256 e, float f, int g) {  
   return e;  
}  
  
// Example 3: Mixed int and HVA parameters  
// Passes a in RCX, c in R8, d in R9, and e pushed on stack.  
// Passes b by element in [XMM0:XMM1];   
// b's stack shadow area is 8-bytes of undefined value.   
// Return value in XMM0.  
__m128 __vectorcall example3(int a, hva2 b, int c, int d, int e) {  
   return b.array[0];  
}  
  
// Example 4: Discontiguous HVA   
// Passes a in RCX, b in XMM1, d in XMM3, and e is pushed on stack.  
// Passes c by element in [YMM0,YMM2,YMM4,YMM5], discontiguous because  
// vector arguments b and d were allocated first.   
// Shadow area for c is an 8-byte undefined value.  
// Return value in XMM0.  
float __vectorcall example4(int a, float b, hva4 c, __m128 d, int e) {  
   return b;  
}  
  
// Example 5: Multiple HVA arguments  
// Passes a in RCX, c in R8, e pushed on stack.  
// Passes b in [XMM0:XMM1], d in [YMM2:YMM5], each with   
// stack shadow areas of an 8-byte undefined value.  
// Return value in RAX.  
int __vectorcall example5(int a, hva2 b, int c, hva4 d, int e) {  
   return c + e;  
}  
  
// Example 6: HVA argument passed by reference, returned by register  
// Passes a in [XMM0:XMM1], b passed by reference in RDX, c in YMM2,   
// d in [XMM3:XMM4].   
// Register space was insufficient for b, but not for d.  
// Return value in [YMM0:YMM3].  
hva4 __vectorcall example6(hva2 a, hva4 b, __m256 c, hva2 d) {  
   return b;  
}  
  
int __cdecl main( void )  
{  
   hva4 h4;  
   hva2 h2;  
   int i;  
   float f;  
   __m128 a, b, d;  
   __m256 c, e;  
  
   a = b = d = _mm_set1_ps(3.0f);  
   c = e = _mm256_set1_ps(5.0f);  
   h2.array[0] = _mm_set1_ps(6.0f);  
   h4.array[0] = _mm256_set1_ps(7.0f);  
  
   b = example1(a, b, c, d, e);  
   e = example2(1, b, 3, d, e, 6.0f, 7);  
   d = example3(1, h2, 3, 4, 5);  
   f = example4(1, 2.0f, h4, d, 5);  
   i = example5(1, h2, 3, h4, 5);  
   h4 = example6(h2, h4, c, h2);  
}  
  
```  
  
## <a name="vectorcall-convention-on-x86"></a>Convenzione __vectorcall su piattaforme x86  
 La convenzione di chiamata `__vectorcall` segue la convenzione `__fastcall` per gli argomenti di tipo Integer a 32 bit e sfrutta i vantaggi dei registri vettoriali SSE per il tipo vettore e gli argomenti HVA.  
  
 I primi due argomenti di tipo Integer presenti nell'elenco di parametri da sinistra a destra vengono inseriti rispettivamente in ECX e in EDX. Un puntatore nascosto `this` viene trattato come primo argomento di tipo Integer e viene passato in ECX. I primi sei argomenti di tipo vettore vengono passati per valore attraverso i registri vettoriali SSE da 0 - 5 oppure nei registri YMM o XMM in base alle dimensioni dell'argomento.  
  
 I primi sei argomenti di tipo vettore, in ordine da sinistra a destra, vengono passati per valore nei registri vettoriali SSE da 0 a 5. I tipi a virgola mobile e `__m128` vengono passati nei registri XMM, mentre i tipi `__m256` vengono passati nei registri YMM. Nessuno spazio dello shadow stack viene allocato per gli argomenti tipo vettore passati dal registro. Il settimo argomento tipo vettore e quelli successivi vengono passati nello stack per riferimento alla memoria allocata dal chiamante. La limitazione dell'errore del compilatore [C2719](../error-messages/compiler-errors-2/compiler-error-c2719.md) non si applica a questi argomenti.  
  
 Dopo che i registri sono stati allocati per gli argomenti vettoriali, i membri dati degli argomenti HVA vengono allocati in ordine crescente ai registri vettoriali inutilizzati da XMM0 a XMM5 (o da YMM0 a YMM5), per i tipi `__m256`), finché sono disponibili registri sufficienti per l'intero HVA. Se non sono disponibili registri sufficienti, l'argomento HVA verrà passato sullo stack per riferimento alla memoria allocata dal chiamante. Nessuno spazio dello stack shadow viene allocato per un argomento HVA. Gli argomenti HVA vengono assegnati ai registri in ordine da sinistra a destra nell'elenco dei parametri e possono trovarsi in qualsiasi posizione.  
  
 Quando possibile, i risultati di funzioni `__vectorcall` sono restituiti per valore in registri. I risultati di tipo Integer, inclusi i valori struct o union di 4 byte o meno, vengono restituiti per valore in EAX. I valori struct o union di tipo Integer di 8 byte o meno vengono restituiti per valore nei registri da EDX a EAX. I risultati di tipo vettore vengono restituiti per valore in XMM0 o in YMM0, a seconda della dimensione. Nei risultati HVA ogni elemento dati viene restituito per valore nei registri da XMM0 a XMM3 o da YMM0 a YMM3, in base alle dimensioni dell'elemento. Altri tipi di risultati vengono restituiti per riferimento alla memoria allocata dal chiamante.  
  
 L'implementazione x86 di `__vectorcall` rispetta la convenzione degli argomenti inseriti nello stack da destra a sinistra dal chiamante e la funzione chiamata pulisce lo stack subito prima della restituzione. Solo gli argomenti non posizionati nei registri sono inviati allo stack.  
  
 Esempi:  
  
```cpp  
// crt_vc86.c  
// Build for x86 with: cl /arch:AVX /W3 /FAs crt_vc86.c  
// This example creates an annotated assembly listing in  
// crt_vc86.asm.  
  
#include <intrin.h>  
#include <xmmintrin.h>  
  
typedef struct {  
   __m128 array[2];  
} hva2;    // 2 element HVA type on __m128  
  
typedef struct {  
   __m256 array[4];  
} hva4;    // 4 element HVA type on __m256  
  
// Example 1: All vectors  
// Passes a in XMM0, b in XMM1, c in YMM2, d in XMM3, e in YMM4.  
// Return value in XMM0.  
__m128 __vectorcall   
example1(__m128 a, __m128 b, __m256 c, __m128 d, __m256 e) {  
   return d;  
}  
  
// Example 2: Mixed int, float and vector parameters  
// Passes a in ECX, b in XMM0, c in EDX, d in XMM1, e in YMM2,   
// f in XMM3, g pushed on stack.   
// Return value in YMM0.  
__m256 __vectorcall   
example2(int a, __m128 b, int c, __m128 d, __m256 e, float f, int g) {  
   return e;  
}  
  
// Example 3: Mixed int and HVA parameters  
// Passes a in ECX, c in EDX, d and e pushed on stack.  
// Passes b by element in [XMM0:XMM1].   
// Return value in XMM0.  
__m128 __vectorcall example3(int a, hva2 b, int c, int d, int e) {  
   return b.array[0];  
}  
  
// Example 4: HVA assigned after vector types  
// Passes a in ECX, b in XMM0, d in XMM1, and e in EDX.  
// Passes c by element in [YMM2:YMM5].   
// Return value in XMM0.  
float __vectorcall example4(int a, float b, hva4 c, __m128 d, int e) {  
   return b;  
}  
  
// Example 5: Multiple HVA arguments  
// Passes a in ECX, c in EDX, e pushed on stack.  
// Passes b in [XMM0:XMM1], d in [YMM2:YMM5].  
// Return value in EAX.  
int __vectorcall example5(int a, hva2 b, int c, hva4 d, int e) {  
   return c + e;  
}  
  
// Example 6: HVA argument passed by reference, returned by register  
// Passes a in [XMM1:XMM2], b passed by reference in ECX, c in YMM0,   
// d in [XMM3:XMM4].   
// Register space was insufficient for b, but not for d.  
// Return value in [YMM0:YMM3].  
hva4 __vectorcall example6(hva2 a, hva4 b, __m256 c, hva2 d) {  
   return b;  
}  
  
int __cdecl main( void )  
{  
   hva4 h4;  
   hva2 h2;  
   int i;  
   float f;  
   __m128 a, b, d;  
   __m256 c, e;  
  
   a = b = d = _mm_set1_ps(3.0f);  
   c = e = _mm256_set1_ps(5.0f);  
   h2.array[0] = _mm_set1_ps(6.0f);  
   h4.array[0] = _mm256_set1_ps(7.0f);  
  
   b = example1(a, b, c, d, e);  
   e = example2(1, b, 3, d, e, 6.0f, 7);  
   d = example3(1, h2, 3, 4, 5);  
   f = example4(1, 2.0f, h4, d, 5);  
   i = example5(1, h2, 3, h4, 5);  
   h4 = example6(h2, h4, c, h2);  
}  
  
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)   
 [Parole chiave](../cpp/keywords-cpp.md)