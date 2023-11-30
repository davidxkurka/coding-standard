<?php

declare(strict_types=1);

namespace Cdn77\Sniffs\Ordering\data;

final class TestClass
{
    public const A = 'a';
    public const B = 'b';

    public const
        IgnoredMultiline1 = 1,
        IgnoredMultiline2 = 2;

    public const C = 'c';
    public const D = [123, 'test'];

    protected const E = 'e';
    protected const F = 'f';
    protected const G = 'g';
    protected const H = 'h';

    private const I = 'i';
    private const J = 'j';
    private const K = 'k';
    private const L = 'l';
}